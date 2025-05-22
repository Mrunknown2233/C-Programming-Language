/**
*write a c program to print the following pattern
**********
****__****
***____***
**______**
*________*
*here _ means the spaces
*/

#include <stdio.h>
int main()
{
    int n,rows,spaces,col;

    printf("\nEnter the no of lines u want: ");
    scanf("%d",&n);

    for(rows=0;rows<n;rows++)
    {
        for(col=n;col>rows;col--)
            printf("*");
        for(spaces=0;spaces<rows*2;spaces++)
            printf(" ");
        // for(spaces=rows;spaces>0;spaces--)
            // printf(" ");
        // for(spaces=rows;spaces>0;spaces--)
            // printf(" ");
        for(col=n;col>rows;col--)
            printf("*");
        printf("\n");

    }
}

