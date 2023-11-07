#include <stdio.h>
#include <string.h>
int main()
{
	int a;
	char str[6]="HELLO";
	int n=strlen(str);
	for (int i=0;i<n;i++){
		str[i]=str[i]+32;
		}
	printf("%s",str);
	return 0;
}
