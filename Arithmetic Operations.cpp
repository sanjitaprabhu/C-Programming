#include <stdio.h>
int main()
{
	int a,b,sum,diff,prod,quot;
	printf("Enter Numbers: \n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	diff=a-b;
	prod=a*b;
	quot=a/b;
	printf("sum: %d\ndifference: %d\nproduct: %d\nquotient: %d",sum,diff,prod,quot);
	return 0;
}
