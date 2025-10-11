//basic calculator

#include<stdio.h>
int main(){
	int num1, num2;
	char ch;

	printf("Enter the first number: ");
	scanf("%d",&num1);

	printf("Enter the second number: ");
	scanf("%d",&num2);

	printf("Choose the operator +, -, *, /, %%: ");
	scanf(" %c",&ch);

	if(ch=='+')
		printf("Addition of %d and %d is %d\n",num1, num2, num1+num2);

	else if(ch=='-')
		printf("The difference between %d and %d is %d",num1, num2, num1-num2);

	else if(ch=='*')
		printf("Product of %d and %d is %d\n",num1, num2, num1*num2);

	else if(ch=='/')
		printf("%d/%d is %d\n", num1, num2, num1/num2);

	else if(ch=='%')
		printf("Remainder of the %d and %d is %d\n",num1,num2,num1%num2);

	else
		printf("Invalid operator\n");
}
