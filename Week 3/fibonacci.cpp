#include <stdio.h>
int main()
{
	int n,i,s,a,b;
	s=0;
	a=0;
	b=1;
	printf("Enter Number: ");
	scanf("%d",&n);
	if (n==1)
	printf("0");
	else if (n==2)
	printf("1");
	else
	{
		for (i=2;i<n;i++)
		{
			s=a+b;
			a=b;
			b=s;
		}
		printf("%d",s);
		
	}
	return 0;
}
