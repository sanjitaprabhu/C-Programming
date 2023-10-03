#include <stdio.h>
int main()
{
	int n;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(int i=1;i<n+1;i++)
	{
		for(int s=0;s<n-i;s++)
		{
			printf(" ");
		}
		for (int j=0;j<i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
