
#include<stdio.h>
void fun(char *);
int main()
{
	char s[] = "Hemanth";
	fun(s);
}

void fun(char *p)
{
	*(p+3) = 'k';
	printf("%s\n",p);
}
