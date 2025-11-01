#include<stdio.h>
void fun(char *);
int main()
{
	char s[] = "Hemanth";
	fun(s);
}

void fun(char *p)
{
	printf("%s\n",p);
}
