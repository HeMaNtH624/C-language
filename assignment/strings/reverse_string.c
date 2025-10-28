#include<stdio.h>
int main()
{
	char s[20], temp;
       	int i, n=0;
	
	printf("Enter the string: ");
	scanf(" %[^\n]",s);

	for(i=0; s[i]; i++)
	{
		n++;
	}
	n--;
	for(int j=0; j<i/2; j++)
	{
		temp = s[j];
		s[j] = s[n];
		s[n] = temp;
		n--;
	}
	printf("Reversed String: %s\n",s);
}
