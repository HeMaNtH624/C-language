#include<stdio.h>
int main()
{
	int num, count=0;
	printf("Enter the number: ");
	scanf("%d",&num);

	for(int i=1; i<=num; i++){
		if(num%i==0)
			count++;
	}
	if(count<=2)
		printf("prime number\n");

	else
		printf("not a prime number\n");
}

