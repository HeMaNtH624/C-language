//find the exponential of the given number

#include<stdio.h>
int main(){
	int base, i=1, pow;
	printf("Enter base and power: ");
	scanf("%d%d",&base,&pow);
	while(pow!=0){
		i = base*i;
		pow--;
	}
	printf("%d\n",i);
}

