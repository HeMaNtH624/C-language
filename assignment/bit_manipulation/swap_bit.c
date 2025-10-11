#include<stdio.h>
int main()
{
	int num, pos1, pos2;
	printf("Enter the number and positions:");
	scanf("%d%d%d",&num, &pos1,&pos2);

	int x = (num>>pos1)&1;
	int y = (num>>pos2)&1;

	if(x==y)
	{
		for(int i=31; i>=0; i--)
		{
			printf("%d",(num>>i)&1);
		}
	}

	else
	{
		num = (1<<pos1)^num;
		num = (1<<pos2)^num;
		printf("the result is %d\n",num);

		for(int i=31; i>=0; i--)
		{
			printf("%d",(num>>i)&1);
		}
	}
	printf("\n");

}
