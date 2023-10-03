#include <stdio.h>
int main()
{
	int n,r,last,first;
	printf("Enter Number: ");
	scanf("%d",&n);
	last=n%10;
	while(n!=0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	first=r%10;
	printf("%d",first+last);
	return 0;
}
