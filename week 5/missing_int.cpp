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
	for (int j=0;j<n-2;j++){
		for (int k=0;k<n-j-2;k++){
			if (a[k]>a[k+1]){
			x=a[k];
			a[k]=a[k+1];
			a[k+1]=x;
			}
		}
	}
	for (k=0;k<n-1;k++){
		if (a[k]!=num){
			printf("Missing Number: %d",num);
			break;
		}
		num=num+1;
	}
	return 0;
}
