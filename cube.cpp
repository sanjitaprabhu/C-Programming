#include <stdio.h>
#include <math.h>
int main()
{
	float a,cube;
	printf("Enter number to find cube of: ");
	scanf("%f",&a);
	cube=pow(a,3);
	printf("Cube: %f",cube);
	return 0;
}
