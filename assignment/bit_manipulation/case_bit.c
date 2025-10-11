#include<stdio.h>
int main()
{
	char ch, op;
	do
	{
	printf("Enter the character: ");
	scanf(" %c",&ch);

	ch = ch^32;
	printf("%c\n",ch);

	printf("Do you want to repeat?");
	scanf(" %c",&op);
	}
	while(op == 'y' || op == 'Y');
}
