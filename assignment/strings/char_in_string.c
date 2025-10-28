// Enter the string and character and checkwether the character is in the string and print the count.

#include<stdio.h>
int main()
{
	char s[20], ch;
	int i, count=0, j;

	printf("Enter the string: ");
	scanf(" %[^\n]",s);

	printf("Enter the character: ");
	scanf(" %c",&ch);

	for(i=0; s[i]; i++)
	{
		if(s[i]==ch)
			count++;
	}

	printf("Count: %d\n",count);
}
