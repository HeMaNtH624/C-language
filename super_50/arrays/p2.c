#include<stdio.h>
int main()
{
int ary[]={55,57,59};
short int *p=ary;
for(int i=0;i<5;i++)
printf("%d ",p[i]);
}
