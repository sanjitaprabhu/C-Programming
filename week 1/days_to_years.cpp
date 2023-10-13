#include <stdio.h>
int main()
{
	float days;
	float years;
	printf("Enter number of days: ");
	scanf("%f",&days);
	years=days/365;
	printf("Number of years: %f",years);
	return 0;
}
