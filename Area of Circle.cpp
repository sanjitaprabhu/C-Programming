#include <stdio.h>
int main()
{
	float pi=3.14,r,area;
	printf("Enter radius: ");
	scanf("%f",&r);
	area=pi*r*r;
	printf("Area: %f",area);
	return 0;
}
