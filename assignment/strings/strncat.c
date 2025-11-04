#include<stdio.h>
#include<string.h>
char *my_strncat(char *d, char *s, int n)
{
	int i, len = strlen(d);
	for(i=0; s[i] && i<n; i++)
	{
		d[len+i] = s[i];
	}
	d[len+i] = '\0';
	return d;
}
int main()
{
	char s[10], d[20];
	int n;

	printf("Enter the string: ");
	scanf("%[^\n]",s);

	printf("Enter the other string: ");
	scanf(" %[^\n]",d);

	printf("Enter the number of bites to be concatenated: ");
	scanf("%d",&n);

	char *p = my_strncat(d,s,n);

	printf("The concatenated string is: %s\n",p);
}
