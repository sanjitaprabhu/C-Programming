#include <stdio.h>
int main()
{
	int n,i=0,k,count=0,l=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	while (i<n){
		scanf("%d",&a[i]);
		i++;
	}
	printf("Enter number to find: ");
	scanf("%d",&k);
	while (l<n){
		if (a[l]==k)
			count+=1;
		l++;
	}
	printf("%d occurs %d times",k,count);
	return 0;
}
