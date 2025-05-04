#include <stdio.h>
#include <conio.h>
#include <stdarg.h>

int getMax(int argsCount,...)
{
	int max,i,currVal;

	/*va_list is a macro used to create a void pointer,
	 which would be helping to point to the variable argument's value
	*/
	va_list varArgs;

	/**
	*va_start(voidPtr,address)
	*here the voidPtr means the void pointer made with the help of va_list
	* address means the variable after which the variable argument's data
	* is stored
	*/
	va_start(varArgs,argsCount);

	/**
	*vaArgs(voidPtr,dataType)
	*here the voidPtr means the void pointer made with the help of va_list
	* dataType means the data type of the next variable u want
	*[data1,data2,data3...]
	   ^
	so acc to the above diagram varArgs(voidPtr,int) will convert the
	data1 to int and return it..
	and move the pointer to the next
	*[data1,data2,data3...]
		 ^
	like this
	*/
	max = va_arg(varArgs,int);


	for(i=0; i<argsCount; i++)
	{
		currVal = va_arg(varArgs,int);
		if(currVal>max)
			max = currVal;
	}

	/**
	*var_end(voidPointer)
	*here voidPointer means the pointer name used with var_list
	This is use to free the memory allocated during the va_list macro
	var_end(varArgs).
	*This is a optional step but it is a good practice to use this as
	  avoid memory leakage
	*/
	va_end(varArgs);
	return max;
}

void main()
{
	int max;
	clrscr();

	max = getMax(7,10,100,200,3,5,6,7);
	printf("\nMax = %d",max);
	getch();
}