#include <stdio.h>
int main()
{
	int days;
	float years;
	printf("Enter number of days: ");
	scanf("%d",&days);
	years=days/365;
	printf("Number of years: %f",years);
	return 0;
}
