#include <stdio.h>
int main()
{
	float a,b,prodf;
	int prodi;
	printf("Enter 2 floating point numbers: \n");
	scanf("%f%f",&a,&b);
	prodf=a*b;
	prodi=a*b;
	printf("Product as Floating Point: %f\nProduct as Integer: %d",prodf,prodi);
	return 0;
}
