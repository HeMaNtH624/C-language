#include<stdio.h>
int main()
{
	char s[30], temp;
	int i, j, k, en, st=0;

	printf("Enter the string: ");
	scanf("%[^\n]",s);

	for(i=0; s[i]; i++);
	
	en = i-1;

	for(;st<en; st++)
	{
		temp = s[st];
		s[st] = s[en];
		s[en] = temp;
		en--;
	}

	printf("%s\n",s);
	
	st = 0;
	for(j=0; j<=i; j++)
	{
		if(s[j] == ' ' || s[j] == '\0')
		{
			en=j-1;
			for(; st<en; st++)
			{
				temp = s[st];
				s[st] = s[en];
				s[en] = temp;
				en--;
			}
			st = j+1;
		}
	}

	printf("%s\n",s);

}
