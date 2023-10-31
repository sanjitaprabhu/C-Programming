#include <stdio.h>
int main()
{
	char a;
	printf("Enter character: ");
	scanf("%c",&a);
	if (('a'<=a && a<='z')||('A'<=a && a<='Z'))
	{
		if (65<=a&&a<=90)
			printf("Uppercase Character");
		else
			printf("Lowercase Character");
	}
	else
		printf("Not an Alphabet");
	return 0;
}

