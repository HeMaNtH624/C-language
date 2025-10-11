#include<stdio.h>
int main()
{
	int num, pro, digit, sum=0, temp;
	printf("Enter the number: ");
	scanf("%d",&num);
	temp=num;
	for(num=num; num!=0; num/=10)
	{
		pro=1;
		digit=num%10;
		for(digit=digit; digit!=0; digit--)
		{
			pro=pro*digit;
		}
		sum=sum+pro;
	}
	if(sum==temp) printf("Strong number..\n");
	else printf("Not a strong number..\n");

}
	

