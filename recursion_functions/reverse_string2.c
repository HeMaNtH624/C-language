#include<stdio.h>
char *reverse(char *, int, int, int);
int main()
{
	int i;
	char s[20];
	printf("Enter the string: ");
	scanf("%[^\n]",s);
	for(i=0; s[i]; i++);
	int en = i-1;
	char *p = reverse(s, i, 0, en);
	printf("%s\n",p);
}

char *reverse(char *s, int i, int j, int en)
{
	char temp;
	if(j<=i/2)
	{
		temp = s[j];
		s[j] = s[en];
		s[en] = temp;
		j++;
		en--;
		return reverse(s,i,j,en);
	}
	else
	return s;
}
