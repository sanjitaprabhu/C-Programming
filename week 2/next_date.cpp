#include <stdio.h>
int main()
{
	int day,month,year,end;
	printf("Enter Date in 'Day Month Year' format: ");
	scanf("%d%d%d", &day, &month, &year);
	day++;
	
	if (month==2)
		if (year%4==0&&(year%400==0||year%100!=0))
			end=29;
		else
			end=28;
	else if (month==4||month==6||month==9||month==11)
		end=30;
	else
		end=31;
	if (day>end)
	{
		day=1;
		month++;
		if (month>12)
		{
			month=1;
			year++;
		}
	}
	
	printf("%d %d %d",day,month,year);
	return 0;
}


