#include<stdio.h>
int main()
{
	int num, i;
	for(num=1; num<=100; num++)
	{
		for(i=2; i<=num/2; i++)

		{
			if(num%i==0)
				break;
		}
		if((i==num/2+1)&&(num%10==3))
			printf("%d ",num);
	}
	printf("\n");
}
