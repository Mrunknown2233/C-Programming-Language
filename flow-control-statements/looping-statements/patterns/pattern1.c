/**
 * write a program to print the following pattern
 * *
 * **
 * ***
 * ****
 * *****
 * and so
 * */


#include <stdio.h>
int main()
{
 int rows,columns,n;

  printf("Enter the no of rows u want : ");
  scanf("%d",&n);

  for(rows = 1; rows<n;rows++)
  {
    for(columns=1;columns<=rows;columns++)
      printf("* ");
    printf("\n");
  }
  return 0;
}

