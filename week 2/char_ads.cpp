#include <stdio.h>
int main()
{
	char a;
	printf("Enter character: ");
	scanf("%c",&a);
	if (('a'<=a && a<='z')||('A'<=a && a<='Z'))
		printf("Alphabet");
	else if ('0'<=a && a<='9')
		printf("Digit");
	else
		printf("Special Character");
	return 0;
}
