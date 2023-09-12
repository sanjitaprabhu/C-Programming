#include <stdio.h>
int main()
{
	float arate=2,brate=3.5,units,cost,excess;
	printf("Enter number of Units: ");
	scanf("%f",&units);
	if (units<100)
		cost=units*arate;
	else
	{
		excess=units-100;
		cost=(100*arate)+(excess*brate);
}
	printf("Cost: %f",cost);
	return 0;
}
