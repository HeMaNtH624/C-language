#include<stdio.h>
int main()
{
	char s[20];
	int i, j;

	printf("Enter the string: ");
	scanf(" %[^\n]",s);

	for(i=0; s[i]; i++);
	int n = i-1;
	int k=0;

	for(j=0; j<=i/2; j++)
	{
		if(s[k]==s[n])
		{
			k++;
			n--;
		}
	}
	
	if(k>=n)
	printf("Palindrome\n");

	else printf("Not a Palindrome\n");

}
