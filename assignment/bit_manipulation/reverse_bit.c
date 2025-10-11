#include<stdio.h>
int main()
{
	int num, pos1=0, pos2=31, x, y;
	printf("Enter the number: ");
	scanf("%d",&num);

	for(;pos2>pos1; pos1++)
	{
		x = num>>pos1&1;
		y = num>>pos2&1;
		if(x!=y){
			num = num^(1<<pos1);
			num = num^(1<<pos2);
	}
	pos2--;
	}
	printf("%d\n",num);
}

