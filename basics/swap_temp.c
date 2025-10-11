#include<stdio.h>
int main(){
	int a, b, temp;
	printf("Enter 'a' value: ");
	scanf("%d",&a);

	printf("Enter 'b' value: ");
	scanf("%d",&b);
	
	temp = a;
	a=b;
	b=temp;
	
	printf("a=%d and b=%d\n",a,b);
}
