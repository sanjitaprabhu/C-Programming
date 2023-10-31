#include <stdio.h>
int main()
{
	int n,x,i=0,l=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	while (i<n){
		scanf("%d",&a[i]);
		i++;
	}
	for (int j=0;j<n-1;j++){
		for (int k=0;k<n-j-1;k++){
			if (a[k]<a[k+1]){
			x=a[k];
			a[k]=a[k+1];
			a[k+1]=x;
			}
		}
	}
	while (l<n)
	{
		printf("%d",a[l]);
		l++;
	}
	return 0;
}
