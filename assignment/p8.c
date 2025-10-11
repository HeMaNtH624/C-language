// print even numbers in the given range

#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);

	if(a<b){
		while(a<=b){
			if(a%2==0){
				printf("%d ",a);
			}
			a++;
		}
	}
	else{
		while(a>=b){
			if(a%2==0){
				printf("%d ",a);
			}
			a--;
		}
	}
	printf("\n");

}
