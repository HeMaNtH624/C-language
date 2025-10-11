// to print how many digits in a given number

#include<stdio.h>
int main(){
	int a, count=0;
	printf("Enter the number: ");
	scanf("%d",&a);

	if(a==0)
		printf("No of digits: 1");

	while(a!=0){
		a=a/10;
		count++;
	}
	printf("No of digits: %d\n",count);
}
