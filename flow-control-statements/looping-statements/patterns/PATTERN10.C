/**
Write a program to print the following pattern
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
and so on
*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int n,rows,col;
	clrscr();
	printf("\nEnter the no of rows u want : ");
	scanf("%d",&n);

	for(rows=n;rows>0;rows--)
	{
		for(col=rows;col>0;col--)
			printf("%d ",col);
		printf("\n");
	}
	getch();
}