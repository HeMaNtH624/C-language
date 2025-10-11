// program to print sum of digits of the given number

#include<stdio.h>
int main(){
	int num, sum=0, a;
	printf("Enter the number: ");
	scanf("%d",&num);

	while(num!=0){
		a=num%10;
		sum=sum+a;
		num=num/10;
	}
	printf("Sum of the given number is: %d\n", sum);
}
