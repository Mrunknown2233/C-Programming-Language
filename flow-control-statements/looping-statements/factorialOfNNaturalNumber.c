#include <stdio.h>

int main()
{
	int i,fact,n;

	printf("\nEnter the value of n : ");
	scanf("%d",&n);

	fact = 1;
	for(i = 1; i <=n; i++)
		fact*=i;
	
	printf("\nTh factorial of %d is %d ",n,fact);

return 0;

}
