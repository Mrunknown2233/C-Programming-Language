#include <stdio.h>
int main()
{
	int num1,num2;

	printf("\nEnter 2 numbers : ");
	scanf("%d%d",&num1,&num2);

	printf("\nBefore swapping : Num1 = %d and Num2 = %d",num1,num2);

	/*
	 num1 = num1 + num2;
	 num2 = num1 - num2;
	 num1 = num1 - num2;
	*/

	num1 = num1^num2;
	num2 = num1^num2;
	num1 = num1^num2;

	printf("\nAfter swapping : Num1 = %d and Num2 = %d",num1,num2);
}
