/**
*write a c program to print the following pattern
*________*
**______**
***____***
****__****
**********
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
        for(col=0;col<=rows;col++)
            printf("*");
        for(spaces=0;spaces<(n-rows-1)*2;spaces++)
            printf(" ");
        // for(spaces=0;spaces<n-rows-1;spaces++)
        //     printf(" ");
        for(col=0;col<=rows;col++)
            printf("*");
        printf("\n");

    }
}