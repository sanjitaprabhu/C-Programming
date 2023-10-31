#include <stdio.h>
#include <math.h>
int main()
{
	int n,r,bin=0,base=1;
	printf("Enter Decimal Number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%2;
		bin=bin+r*base;
		n=n/2;
		base=base*10;
	}
	printf("%d",bin);
	return 0;
}
