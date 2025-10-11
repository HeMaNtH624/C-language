#include<stdio.h>
int main(){
	int x=10,y;
	y=++x;
	y = x++;
	y=--x;
	y=x--;
	printf("x=%d\ny=%d\n",x,y);
}
