#include <stdio.h>
#include <string.h>
int main(){
	int count=0,j=0;
	char str[6]="hello";
	for (int i=0;str[i]!='\0';i++){
		count+=1;
	}
	int n=count+1;
	char rev[n];
	for (int i=n-2;i>=0;i--){
		rev[j]=str[i];
		j++;
	}
	printf("%s",rev);
	return 0;
}
