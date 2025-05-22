/**
*write a c program to print the following pattern
	**********
	****__****
	***____***
	**______**
	*________*
	**______**
	***____***
	****__****
	**********
*and so on
*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int rows,col,spaces,n;
	clrscr();

	printf("\nEnter the no of rows u want: ");
	scanf("%d",&n);

	for(rows=0;rows<n;rows++)
	{
		for(col=n;col>rows;col--)
			printf("*");
		for(spaces=0;spaces<(rows*2);spaces++)
			printf(" ");
		for(col=n;col>rows;col--)
			printf("*");
		printf("\n");
	}
	for(rows=0;rows<n;rows++)
	{
		for(col=0;col<=rows;col++)
			printf("*");
		for(spaces=0;spaces<(n-rows-1)*2;spaces++)
			printf(" ");
		for(col=0;col<=rows;col++)
			printf("*");
		printf("\n");
	}

	getch();
}

