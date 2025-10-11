#include<stdio.h>
int largest(int a, int b, int c);
#define pf printf
#define sf scanf
int main(){
	int num1, num2, num3;
	pf("Enter the first number: ");
	sf("%d",&num1);

	pf("Enter the second numbre: ");
	sf("%d", &num2);

	pf("Enter the third number: ");
	sf("%d", &num3);

	largest(num1, num2, num3);
}

int largest(int a, int b, int c){
	int largest;
	if(a>=b && a>=c){
		printf("%d is larger\n",a);
	}
	else if(b>=c && b>=a){
		pf("The largest number is:%d \n",b);
	}else{
		pf("The largest number is %d\n",c);
	}
}

