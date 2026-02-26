#include<stdio.h>
#include<string.h>
char *my_strstr(char *, char *);
int main()
{
	char s[20] = "embedded";
	char t[20] = "bed";

	char *l = my_strstr(s, t);

	if(l == NULL)
		printf("substring not found\n");

	else printf("substring found at %s\n",l);
}

char *my_strstr(char *s, char *t)
{
	int i;
	int n = strlen(t);
	for(i=0; s[i]; i++)
	{
		if(strncmp(s+i, t, n)==0)
			return s+i;
	}
	return NULL;
}
