#include <stdio.h>
#include <math.h>
int main()
{
	int n,r;
	printf("Enter Number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	printf("%d",r);
	return 0;
}
