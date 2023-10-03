#include <stdio.h>
int main()
{
	int i,n,r;
	printf("Enter Number: ");
	scanf("%d",&n);
	i=n;
	while(n!=0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	if (i==r)
		printf("Number is Palindrome");
	else
		printf("Number is not a Palindrome");
	return 0;
}
