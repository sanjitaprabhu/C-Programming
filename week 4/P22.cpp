#include <stdio.h>
int main()
{
	int n;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		for (int j=0;j<i;j++)
		{
			printf("%d*",i);
		}
		printf("\n");
	}
	for(int i=1;i<n;i++)
	{
		for (int j=0;j<n-i;j++)
		{
			printf("%d*",n-i);
		}
		printf("\n");
	}
	return 0;
}
