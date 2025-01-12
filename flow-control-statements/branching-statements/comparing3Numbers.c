#include <stdio.h>

int main()
{
	int num1,num2,num3;

	printf("\nEnter 3 numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);

	printf("\nNum1 = %d, Num2 = %d, Num3 = %d",num1,num2,num3);

	if(num1 == num2 && num1 == num3)
		printf("\nAll 3 numbers are equal");
	else if(num1 > num2 && num1 > num3)
		printf("\nNum1(%d) is the greatest amoung all three numbers",num1);

	else if(num1 < num2 && num2 > num3)
		printf("\nNum2(%d) is the greatest amoung all three numbers",num2);
	else
		printf("\nNum3(%d) is the greatest amoung all three numbers",num3);

return 0;

	
}
