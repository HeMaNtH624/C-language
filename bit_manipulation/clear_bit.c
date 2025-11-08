#include<stdio.h>
int main()
{
	int num, pos;
	printf("Enter the number and position: ");
	scanf("%d%d",&num,&pos);

	if(((1<<pos)&num)==0) printf("%d\n",num);
	else 
	{
		num=(1<<pos)^num;
		printf("%d\n",num);
	}

}
