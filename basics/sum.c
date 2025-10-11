#include <stdio.h>
int sum(int a,int b);
int main(){
int num1, num2;
printf("Enter the first number:");
scanf("%d",&num1);
printf("Enter the second number:");
scanf("%d",&num2);
printf("Sum of the given two numbers is ");
sum(num1,num2);
}

int sum(int a,int b){
int add = a+b;
printf("%d\n",add);
}
