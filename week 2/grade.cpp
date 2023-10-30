#include <stdio.h>
int main()
{
	float p,c,b,m,cs,sum,per;
	printf("Enter marks of Physics: ");
	scanf("%f",&p);
	printf("Enter marks of Chemistry: ");
	scanf("%f",&c);
	printf("Enter marks of Biology: ");
	scanf("%f",&b);
	printf("Enter marks of Mathematics: ");
	scanf("%f",&m);
	printf("Enter marks of Computer: ");
	scanf("%f",&cs);
	
	sum=p+c+b+m+cs;
	per=sum/5;
	printf("%f \n",per);
	
	if (per>=90)
	printf("Grade A\n");
	else if (per>=80)
	printf("Grade B\n");
	else if (per>=70)
	printf("Grade C\n");
	else if (per>=60)
	printf("Grade D\n");
	else if (per>=40)
	printf("Grade E\n");
	else
	printf("Grade F\n");
	
	return 0;
}
