#include <stdio.h>
int main()
{
	int n,r,t=0;
	printf("Enter Number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		t=t+r;
		n=n/10;
	}
	printf("%d",t);
	return 0;
}
