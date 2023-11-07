#include <stdio.h>
#include <string.h>
int main()
{
	char str1[6]="Hello";
	char str2[6]="World";
	int n1=strlen(str1);
	int n2=strlen(str2);
	char str3[n1+n2];
	int a=0;
	for (int i=0;i<n1;i++){
		str3[i]=str1[i];
	}
	for (int j=0;j<n2;j++){
		str3[n1+j]=str2[j];
	}
	printf("Concatenated String: ");
	printf("%s",str3);
	return 0;
}
