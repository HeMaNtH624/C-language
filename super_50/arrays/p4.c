#include<stdio.h>
void fun(int [],int);
int main()
{
int a[]={3,4,2,6,7};
fun(a+2,5);
for(int i=0;i<5;i++)
printf("%d ",a[i]);
}
void fun(int a[],int n)
{
a[0]=8;
a[2]=10;
}
