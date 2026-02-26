#include<stdio.h>
int main()
{
	int x=10;
	int *p=&x;
	int y=20;

	printf("x=%d *p=%d\n", x,*p);
	printf("&x=%p p=%p\n", &x,p);

	p=&y;

	printf("y=%d *p=%d\n",y,*p);
	printf("&y=%p p=%p\n", &y,p);


}
