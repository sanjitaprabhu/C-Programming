#include <stdio.h>
int main()
{
	float km,m,cm,mm;
	printf("Enter Kilometers: ");
	scanf("%f",&km);
	m=km*1000;
	cm=km*100000;
	mm=km*1000000;
	printf("Meters: %f\nCentimeters: %f\nMillimeters: %f",m,cm,mm);
	return 0;
}
