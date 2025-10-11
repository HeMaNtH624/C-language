#include<stdio.h>
int main()
{
	int num, sum, temp, i, pro, digit, st, end;
	printf("Enter the range: ");
	scanf("%d%d",&st,&end);

	for(num=st; num<end; num++)
	{
		sum=0;
		temp=num;
		for(i=num; i!=0; i/=10)
		{
			pro=1;
			digit=i%10;
			for(digit=digit; digit!=0; digit--)
			{
				pro=pro*digit;
			}
			sum=sum+pro;
		}
		if(sum==temp) printf("%d ",sum);
	}
	printf("\n");
}

