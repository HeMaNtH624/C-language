#include<stdio.h>
int main()
{
	char s[20];
	int i;
	printf("Enrer the string: ");
	scanf("%[^\n]",s);

	for(i=0; s[i]; i++)
	{
		if(s[i]>=97 && s[i]<=122)
			s[i] = s[i]-32;
	}
	printf("S=%s\n",s);
}
