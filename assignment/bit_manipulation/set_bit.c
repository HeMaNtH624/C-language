#include<stdio.h>
int main()
{
	int num, pos;
	printf("Enter the number and position: ");
	scanf("%d%d",&num,&pos);

	printf("%d\n",(1<<pos)|num);
}

