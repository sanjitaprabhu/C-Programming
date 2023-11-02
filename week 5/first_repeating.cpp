#include <stdio.h>
int main()
{
	int n,x=0,num=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	while (num<n){
		scanf("%d",&a[num]);
		num++;
	}
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n && j>i;j++){
			if (a[i]==a[j]){
				printf("%d",a[i]);
				goto exit;
			}
		}
	}
	exit:
	;
	return 0;
}
