#include<stdio.h>
int main()
{
	int num, temp, rev, rem, start, end;
	printf("Enter the range: ");
	scanf("%d%d",&start, &end);
	for(num=start; num<end; num++)
	{
		rev=0;
		for(temp=num; temp!=0; temp/=10)
		{
			rem=temp%10;
			rev=rev*10+rem;
		}
		if(rev==num)
			printf("%d ", rev);
	}
	printf("\n");
}

