#include<stdio.h>
int reverse(int, int);
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	printf("reversed number: %d\n",reverse(num, 0));
}

int reverse(int num, int sum)
{
	if(num!=0)
	{
		sum = sum*10+(num%10);
		return reverse(num/10, sum);
	}
	else return sum;
}
