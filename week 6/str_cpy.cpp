#include <stdio.h>
#include <string.h>
int main()
{
	char str[6]="hello";
	int n=strlen(str);
	char cpy[n];
	for (int i=0;str[i]!='\0';i++){
		cpy[i]=str[i];
	}
	printf("Copied String: ");
	printf("%s",cpy);
	return 0;
}
