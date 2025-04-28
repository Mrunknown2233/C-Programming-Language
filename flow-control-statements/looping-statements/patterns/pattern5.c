/**
 * Write a program to print the following patter
 * *_*_*_*_*
 * _*_*_*_*
 * __*_*_*
 * ___*_*
 * ____*
 * and so on
 * Note here spaces are represented by _
 */

#include <stdio.h>
int main()
{
  int rows,columns,spaces,n;

  printf("Enter the no of rows u want :");
  scanf("%d",&n);

  for(rows=n;rows>0;rows--)
  {
    for(spaces=n;spaces>rows;spaces--)
      printf(" ");
    for(columns=rows;columns>0;columns--)
      printf("* ");
    printf("\n");
  }
  return 0;
}
