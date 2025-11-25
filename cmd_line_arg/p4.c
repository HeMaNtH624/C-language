#include<stdio.h>
int main()
{
	int i,a[] = {10,20,30,40,50,60,70,80,90};
	int *p[3] = a;

	for(i=0;i<9;i++)
	printf("%d ",p[i]);
	printf("\n");

	printf("p = %p  p+1 = %p\n",p,p+1);
}
