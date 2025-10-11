// to print numbers in the given range in ascending oor descending order

#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);

	if(a<b){
		while(a<=b){
			printf("%d ",a);
			a++;
		}
	}
	else{
		while(a>=b){
			printf("%d ",a);
			a--;
		}
	}
	printf("\n");
}
