#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int rem(int a, int b);
float div(float a, float b);
#define pf printf
#define sf scanf
int main(){
	int num1, num2, op;
	pf("Enter the first number:");
	sf("%d", &num1);
	pf("Enter the second number:");
	sf("%d", &num2);
	pf("Enter the operator from 1 to 4\n1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n5.Remainder");
	pf("\nOperator: ");
	sf("%d",&op);

	switch(op){
		case 1:
			add(num1, num2);
			break;
		case 2:
			sub(num1, num2);
			break;
		case 3:
			mul(num1, num2);
			break;
		case 4:
			div(num1, num2);
			break;
		case 5:
			rem(num1, num2);
			break;
		default:
			pf("Invalid operator\n");
	}
}


	int add(int a, int b){
		int sum = a+b;
		printf("Sum of the given two numbers is: %d\n",sum);
	}

	int sub(int a, int b){
		int dif = a-b;
		printf("Difference of the given two numbes is: %d\n", dif);
	}

	int mul(int a, int b){
		int pro = a*b;
		printf("Product of given two numbers is: %d\n", pro);
	}

	int rem(int a, int b){	
		if(b==0){
		 pf("Operation cannot be performed since the denominator is 0\n");
		}
		else{
		int rem = a%b;
		pf("Remainder for the given two numbers is: %d\n", rem);
		}
	}

	float div(float a, float b){
		if(b==0){
		 pf("Operation cannot be performed since the denominator is 0\n");
		}else{
		float div = a/b;
		printf("Division of given two numbers is: %.2f\n", div);
		}
	}
