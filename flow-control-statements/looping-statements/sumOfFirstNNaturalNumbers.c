#include <stdio.h>
int main()
{
	int i,n,sum=0;

	printf("\nEnter the value of n : ");
	scanf("%d",&n);

	for(i  = 0; i <=n; i++)
		sum+=i;

	printf("\nThe sum of natural numbers till %d is %d ",n,sum);
}