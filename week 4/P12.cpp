#include <stdio.h>
int main()
{
	int n;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	n=n/2;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
