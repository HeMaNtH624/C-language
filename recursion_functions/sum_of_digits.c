#include<stdio.h>
int sum_of_digit(int, int);
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	printf("sum = %d\n",sum_of_digit(num, 0));
}

int sum_of_digit(int num, int sum)
{
	int dig;
	if(num!=0)
	return sum_of_digit(num/10, sum+(num%10));

	else return sum;
}
