#include <stdio.h>
int main()
{
	int n;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	n=n+1;
	n=n/2;
	for(int i=0;i<n;i++)
	{
		for(int s=0;s<n-i-1;s++)
		{
			printf(" ");
		}
		for(int j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	n=n-1;
	for(int i=0;i<n;i++)
	{
		for(int s=0;s<i+1;s++)
		{
			printf(" ");
		}
		for(int j=0;j<2*n-2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
