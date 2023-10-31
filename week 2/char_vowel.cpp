#include <stdio.h>
int main()
{
	char a;
	printf("Enter character: ");
	scanf("%c",&a);
	if (('a'<=a && a<='z')||('A'<=a && a<='Z'))
	{
		if (a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
			printf("Character is a Vowel");
		else
			printf("Character is a Consonant");
	}
	else
		printf("Not an Alphabet");
	return 0;
}


