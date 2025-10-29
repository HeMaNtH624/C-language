#include<stdio.h>
int sum_of_digit(int num)
{
	int dig, sum = 0;
	for(int i=0; num!=0; num/=10)
	{
		dig = num%10;
		sum = sum+dig;
	}
	return sum;
}

int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	printf("%d\n",sum_of_digit(num));
}
