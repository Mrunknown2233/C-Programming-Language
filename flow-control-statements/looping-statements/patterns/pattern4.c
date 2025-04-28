/**
 * Write a program to print the following pattern
 * ____*
 * ___*_*
 * __*_*_*
 * _*_*_*_*
 * *_*_*_*_*
 * and so on 
 * Note here _ means space
 */

#include <stdio.h>
int main()
{
  int rows,columns,spaces,n;

  printf("Enter the no of rows u want : ");
  scanf("%d",&n);

  for(rows=0;rows<n;rows++)
  {
    for(spaces=n-1;spaces>rows;spaces--)
      printf(" ");
    for(columns=0;columns<=rows;columns++)
      printf("* ");
    printf("\n");
  }
  return 0;
}
