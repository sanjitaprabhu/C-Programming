#include <stdio.h>
int main()
{
	int month,year;
	printf("Enter year: ");
	scanf("%d",&year);
	printf("Enter month: ");
	scanf("%d",&month);
	if ((year%4==0&&(year%400==0||year%100!=0))&&month==2)
	printf("29 days");
	else if (month==2)
	printf("28 days");
	else if (month==4||month==6||month==9||month==11)
	printf("30 days");
	else
	printf("31 days");
	
	return 0;
}
