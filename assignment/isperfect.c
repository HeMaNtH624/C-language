//checking perfect number
#include<stdio.h>
int main()
{
	int num, temp=0;
	printf("Enter the number: ");
	scanf("%d",&num);

	for(int i=1; i<num; i++){
		if(num%i==0){
			temp=temp+i;
		}
	}
	if(temp==num)
		printf("Perfect number\n");

	else
		printf("Not a perfect number\n");

}
