#include<stdio.h>
int main(){
	int a;
	printf("Enter 'a' value: ");
	scanf("%d",&a);
	a%2?puts("odd"):puts("even");
}
