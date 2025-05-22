/**Write a program to print the following pattern
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
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
			printf("%d ",(col+1)%2);
		printf("\n");
	}
	getch();
}