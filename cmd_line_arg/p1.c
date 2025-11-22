#include<stdio.h>
int main(int a, char *s[])
{
	if(a!=3)
	{
		printf("usage: ./a.out char char\n");
		return 0;
	}

	char x = *s[1];
	char y = *s[2];

	printf("x = %c, y = %c\n", x, y); 
}
