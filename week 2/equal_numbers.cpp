#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b&&b==c)
	printf("Numbers are equal");
	else
	printf("Numbers are inequal");
	
	return 0;
}
