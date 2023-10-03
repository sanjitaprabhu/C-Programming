#include <stdio.h>
int main()
{
	int n,a=1;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(int i=1;i<n+1;i++)
	{
		for (int j=1;j<i+1;j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
