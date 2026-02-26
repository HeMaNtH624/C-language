#include<stdio.h>
int main()
{
	int a[2][3] = {{10, 20, 30}, {40, 50, 60}};
	int (*p)[3] = a+1;

	p--;
	printf("%d \n", (*p)[1]);
}
