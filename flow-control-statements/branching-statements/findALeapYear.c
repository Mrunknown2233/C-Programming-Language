#include <stdio.h>

int main()
{
	int year;

	printf("\nEnter a year : ");
	scanf("%d",&year);

	if( (year % 400 == 0 ) ||  (year % 100 !=0 && year % 4 == 0))
		printf("\nThe year %d is a leap year ",year);
	else
		printf("\nThe year %d is not a leap year",year);
}