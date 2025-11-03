#include<stdio.h>
#include<string.h>
char * my_strcat(char *, char*);
int main()
{
	char src[10], dest[20];
	int i;
	printf("Enter the source string: ");
	scanf("%[^\n]",src);

	printf("Enter the destination array: ");
	scanf(" %[^\n]",dest);

	char *p = my_strcat(dest, src);

	printf("appended string: %s\n",p);
}

char *my_strcat(char *dest, char*src, int n)
{
	int i, len = strlen(dest);

	for(i=0; i<n && src[i]; i++)
	dest[len+i] = src[i];
	dest[len+i] = '\0';

	return dest;
}
