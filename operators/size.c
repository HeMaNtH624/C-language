#include<stdio.h>
int main(){
	printf("Size of integer: %ld\n",sizeof(int));
	printf("Size of character: %ld\n",sizeof(char));
	printf("Size of float: %ld\n",sizeof(float));
	printf("Size of String: %ld\n",sizeof("Hemanth"));

	int integer=sizeof(int);
	int x=integer/2;
	printf("integer=%d\n",x);
}
