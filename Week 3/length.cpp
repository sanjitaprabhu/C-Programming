#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter Number: ");
	scanf("%d",&n);
	while (n!=0)
	{
		n=n/10;
		i++;
	}
	printf("%d",i);
	return 0;
}
