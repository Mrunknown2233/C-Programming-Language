#include <stdio.h>

int main()
{
	int num1,num2;

	printf("\nEnter 2 numbers : ");
	scanf("%d%d",&num1,&num2);

	if(num1 == num2)
		printf("\nBoth the numbers are equal");
	else if(num1 > num2)
		printf("\nNum1(%d) is greater than Num2(%d)",num1,num2);
	else
		printf("\nNum2(%d) is greater than Num1(%d)",num2,num1);
}
