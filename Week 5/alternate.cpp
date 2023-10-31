#include <stdio.h>
int main()
{
	int n,x,i=0,l=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	while (i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	for(int j=0;j<n;j+=2)
	{
		x=a[j];
		a[j]=a[j+1];
		a[j+1]=x;
	}
	while (l<n)
	{
		printf("%d",a[l]);
		l++;
	}
	return 0;
}
