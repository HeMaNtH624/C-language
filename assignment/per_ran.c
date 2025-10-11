#include<stdio.h>
int main()
{
        int num,i,temp;
	for(num=1;num<=100000;num++)
	{
		temp=0;	
		for(i=1; i<num; i++)
		{
			if(num%i==0)
			temp=temp+i;	
		}
		if(temp==num)
			printf("%d ", temp);
	}
	printf("\n");
}
