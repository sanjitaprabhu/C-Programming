#include <stdio.h>
int main()
{
	int n,x,i=0,k,l=0,num=1;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n-1];
	printf("Enter elements:\n");
	while (i<n-1){
		scanf("%d",&a[i]);
		i++;
	}
