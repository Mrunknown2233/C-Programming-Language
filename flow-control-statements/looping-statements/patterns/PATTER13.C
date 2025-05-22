/**
Write a program to print the following pattern
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
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

	for(rows=1;rows<=n;rows++)
	{
		for(col=0;col<rows;col++)
			printf("%d ",col+rows);
		printf("\n");
	}
	getch();
}