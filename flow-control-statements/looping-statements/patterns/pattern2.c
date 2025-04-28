/**
 * write a program to print the following pattern
 * *****
 * ****
 * ***
 * **
 * *
 * and so on
 */
#include <stdio.h>
int main()
{
  int rows,columns,n;

  printf("Enter the no of rows u want: ");
  scanf("%d",&n);

  for(rows = 0; rows<n;rows++)
  {
    for(columns = 0;columns<n-rows;columns++)
      printf("*");
    printf("\n");
  }
  return 0;
}
