#include <stdio.h>
int main()
{
	int n,min,max,sum,i=0;
	float avg,n1;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	n1=n;
	printf("Enter elements:\n");
	while (i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	min=a[0];
	max=a[0];
	for (int j=0;j<n;j++)
	{
		if (a[j]<min)
			min=a[j];
		if (a[j]>max)
			max=a[j];
		sum=sum+a[j];
	}
	printf("%d",sum);
	avg=sum/n1;
	printf("Minimum: %d\nMaximum: %d\nAverage: %f",min,max,avg);
	return 0;
}
