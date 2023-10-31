#include <stdio.h>
int main()
{
	int n,num=0,i=0,j=0,k=0,size,l=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	size=n;
	printf("Enter elements:\n");
	while (num<n){
		scanf("%d",&a[num]);
		num++;
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (a[i]==a[j]){
				int x=a[j];
				for(k=j;k<n;k++){
					a[k]=a[k+1];
				}
				a[n-1]=x;
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
