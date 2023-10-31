#include <stdio.h>
#include <math.h>
int main()
{
	int n,r,dec,base=1;
	printf("Enter Binomial Number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		dec=dec+r*base;
		n=n/10;
		base=base*2;
	}
	printf("%d",dec);
	return 0;
}
