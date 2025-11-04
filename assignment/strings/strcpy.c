#include<stdio.h>
char * my_strcpy(char*, char*);
int main()
{
	char s[20], d[20];
	printf("Enter the string: ");
	scanf("%s",s);

	char *p = my_strcpy(d,s);

	printf("copied string: %s\n",p);
}	

char *my_strcpy(char* d, char *s)
{
	int i;
	for(i=0; s[i]; i++)
	{
		d[i] = s[i];
	}
	d[i] = '\0';
	return d;
}
