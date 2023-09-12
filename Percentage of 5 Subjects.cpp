#include <stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,total,percentage;
	printf("Enter Marks of 5 Subjects: \n");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	percentage=total/5;
	printf("Percentage: %f",percentage);
	return 0;
}
