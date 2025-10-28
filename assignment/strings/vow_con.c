// To print no og\f vowels and consonants in an array

#include<stdio.h>
int main()
{
	char s[20];
	int vow=0, con=0, space=0;

	printf("Enter the string: ");
	scanf(" %[^\n]",s);

	for(int i=0; s[i]; i++)
	{
		switch(s[i])
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U': vow++; break;
			case ' ': space++; break;
			default: 
			if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
			{
				con++;
				break;
			}	

		}
	}
	printf("vowels: %d\nConsonants: %d\n",vow, con);
}
