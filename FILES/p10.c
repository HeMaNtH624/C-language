#include<stdio.h>
int main()
{
	int i;
int num=500;
char *ptr=&num;
for(i=0;i<4;i++)
{
if(*ptr!=0)
*ptr=2;
else
break;
}
printf("%d %d",i,num);
}
