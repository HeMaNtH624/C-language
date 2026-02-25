#include <stdio.h>
int fun(int );
int main() {
int n=5;
printf("%d",fun(n));
}
int fun(int n)
{
if(n>1)
return fun(n-2);
else
return 2;
}
