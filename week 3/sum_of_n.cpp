#include <stdio.h>
int main()
{
	int s,i,n;
	s=0;
	printf("Enter Natural Number: ");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	s=s+i;
	printf("%d",s);
	return 0;
}
