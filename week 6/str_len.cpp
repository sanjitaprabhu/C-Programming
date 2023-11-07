#include <stdio.h>
int main()
{
	int count=0;
	char str[6]="hello";
	for (int i=0;str[i]!='\0';i++){
		count+=1;
	}
	printf("Length: %d",count);
	return 0;
}
