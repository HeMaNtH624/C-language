#include<stdio.h>
int main(){
	int base, power, result=1;
	printf("Enter base and power: ");
	scanf("%d%d",&base,&power);

	while(power!=0){
		result=result*base;
		power--;
	}
	printf("%d",result);
}
	
