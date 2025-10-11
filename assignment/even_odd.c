#include<stdio.h>
int main()
{
	int num, even=0, odd=0, i, rem;
	printf("Enter the number: ");
	scanf("%d",&num);

	while(num!=0)
	{
		rem=num%10;
		if(rem%2==0)
			even++;
		else odd++;
		num=num/10;
	}
	printf("%d even numbers\n",even);
	printf("%d odd numbers\n", odd);
}

