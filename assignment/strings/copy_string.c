#include<stdio.h>
int main()
{
	char s[20], ch[20];
	printf("Enter the string: ");
	scanf(" %[^\n]",s);

	for(int i=0; s[i]; i++)
	{
		ch[i]=s[i];
	}
	printf("Copied String: %s\n",ch);
}
