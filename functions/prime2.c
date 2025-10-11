#include<stdio.h>
int prime(int n);
int main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);

	if(prime(num)){
		printf("%d is a prime number.\n",num);
	}
	else printf("%d is not a prime number.\n",num);
	return 0;
}

int prime(int n){
	if(n<=1) return 0;
	for(int i=2;i<n;i++){
		if(n%i==0) return 0;
	}

	return 1;
}
