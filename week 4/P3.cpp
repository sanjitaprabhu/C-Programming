#include <stdio.h>
int main()
{
	int n;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int s=0;s<n-i;s++)
		{
			printf(" ");
		}
		for(int j=0;j<i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
