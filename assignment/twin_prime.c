#include<stdio.h>
int main()
{
	int num, i, prev=2;
	for(num=1; num<100; num++)
	{
		for(i=2; i<=num/2; i++)
		{
			if(num%i==0)
				break;
		}
		if(i==num/2+1)
		{
			if(prev==num-2)
			{
				printf("(%d, %d) ", prev,num);
			}
		prev=num;
		}
	}
	printf("\n");
}

