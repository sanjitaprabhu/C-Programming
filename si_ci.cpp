#include <stdio.h>
#include <math.h>
int main()
{
	float p,r,t,n,si,ci,x,power;
	int y;
	printf("Enter Principal: ");
	scanf("%f",&p);
	printf("Enter Rate: ");
	scanf("%f",&r);
	printf("Enter Time: ");
	scanf("%f",&t);
	printf("Enter Number of Times Rate is Compunded per Year: ");
	scanf("%f",&n);
	si=p+((p*r*t)/100);
	ci=p*pow(1+(r/100),n*t);
	printf("Simple Interest: %f\nCompound Interest: %f",si,ci);
	return 0;
}
