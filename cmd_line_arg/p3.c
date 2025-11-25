#include<stdio.h>
int main()
{
        int x = 300;
        char *p = &x;
        char **ptr = &p;

        *++*ptr = 2;  

        printf("x = %d\n",x);
        printf("*p = %d\n",*p);
        printf("**ptr = %d\n",**ptr);
}
