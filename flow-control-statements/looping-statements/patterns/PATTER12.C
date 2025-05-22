/**Write a program to print the following pattern
0
0 1
0 1 2
0 1 2 0
and so on
*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int n,rows,col;
	clrscr();
	printf("\nEnter the no of rows u  want : ");
	scanf("%d",&n);

	for(rows=0;rows<n;rows++)
	{
		for(col=0;col<=rows;col++)
			printf("%d ",(col+1)%3);
		printf("\n");
	}
	getch();
}