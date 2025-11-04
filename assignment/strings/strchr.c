#include<stdio.h>
#include<string.h>
char *my_strchr(char *s, char n)
{
	int i;
	for(i=0; s[i]; i++)
	{
		if(s[i] == n)
			return s+i;
	}
	return NULL;
}

int main()
{
	char s[20];
	char n;
	printf("Enter the string: ");
	scanf("%[^\n]",s);

	printf("Enter the character you wanted to check: ");
	scanf(" %c",&n);

	char *p = my_strchr(s,n);

	if(p == NULL) printf("Character not found\n");
	else printf("character found at %s\n",p);
}
