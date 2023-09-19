#include <stdio.h>
int main()
{
	int reg;
	float bs;
	printf("Enter Base Salary: ");
	scanf("%f",&bs);
	printf("Enter region: ");
	scanf("%d",&reg);
	if (reg==1)
	printf("%f is the Gross Salary",bs+(bs*0.44)+(bs*0.27));
	else if (reg==2)
	printf("%f is the Gross Salary",bs+(bs*0.44)+(bs*0.24));
	else if (reg==3)
	printf("%f is the Gross Salary",bs+(bs*0.44)+(bs*0.16));
	else
	printf("%f is the Gross Salary",bs+(bs*0.44)+(bs*0.12));
	
	return 0;
}
