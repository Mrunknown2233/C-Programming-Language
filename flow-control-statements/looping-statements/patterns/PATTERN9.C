/**
Write a program to print the following pattern
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
and so  on
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
		for(col=1; col<=rows;col++)
			printf("%d ",col);
		printf("\n");
	}
	getch();
}