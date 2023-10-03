#include <stdio.h>
int main()
{
	int n,s;
	printf("Enter starting number, number of rows:\n");
	scanf("%d%d",&s,&n);
	for(int i=0;i<n+1;i++)
	{
		for (int j=0;j<i;j++)
		{
			printf("%d ",s-1);
		}
		++s;
		printf("\n");
	}
	for(int i=1;i<n+1;i++)
	{
		for (int j=1;j<n-i+2;j++)
		{
			printf("%d ",s-2);
		}
		--s;
		printf("\n");
	}
	return 0;
}
