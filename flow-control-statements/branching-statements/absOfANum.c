#include <stdio.h>
 int main()
{
	int num,abs;

	printf("\nEnte a number : ");
	scanf("%d",&num);
	
	abs=num;
	if(num < 0)
		abs = num * (-1);

	printf("\nThe absolute of %d is %d ",num,abs);
}
