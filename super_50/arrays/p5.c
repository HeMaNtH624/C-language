#include<stdio.h>
int main()
{
char s[]={200,300,400};
char *p=s;
printf("%d\n",*p++);
printf("%d\n",*p++);
}
