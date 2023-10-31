#include <stdio.h>
int main()
{
	int n,x,i=0,l=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	int p=0,q=n-1;
	printf("Enter elements:\n");
	while (i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	for(int j=0;j<(n+1)/2;j++)
	{
		x=a[j];
		a[p]=a[q];
		a[q]=x;
		p++;
		q--;
	}
	while (l<n)
	{
		printf("%d",a[l]);
		l++;
	}
	return 0;
}
