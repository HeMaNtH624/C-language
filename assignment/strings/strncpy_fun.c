#include<stdio.h>
char *my_strncpy(char *, char *, int );
int main()
{
	char s[10], d[10];
	int i, n;
	printf("Enter the source string: ");
	scanf("%[^\n]",s);

	printf("Enter number of bytes to be copied: ");
	scanf("%d",&n);
	
	printf("original string: %s\n",s);
	char *p = my_strncpy(s,d,n);
	printf("copied destination string: %s\n",p);
}

char * my_strncpy(char *d, char *s, int n)
{
	int i;
	for(i=0; i<n && s[i]!='\0'; i++)
	{
		d[i] = s[i];
	}
	d[n] = '\0';
	return d;
}
