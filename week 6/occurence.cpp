#include <stdio.h>
#include <string.h>
int main()
{
	char str[6]="hello";
	int n=strlen(str);
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (str[i]==str[j]){
				printf("Index: %d",i);
			}
		}
	}
	return 0;
}
