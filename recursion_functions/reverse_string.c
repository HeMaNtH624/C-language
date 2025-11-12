#include<stdio.h>
char *reverse_string(char *, int, int, int);
int main()
{
	char s[20];
	int i;
	printf("Enter the string: ");
	scanf("%s",s);
	for(i=0; s[i]; i++);
	int en = i-1;
	char *p = reverse_string(s, 0, en, i);
	printf("Reversed string is: %s\n",s);
}

char *reverse_string(char *s, int k, int en, int i)
{
	char temp;
	if(k<=i/2)
	{
		temp = s[k];
		s[k] = s[en];
		s[en] = temp;
		en--;
		k++;
		return reverse_string(s, k, en, i);
	}
	else return s;
}
