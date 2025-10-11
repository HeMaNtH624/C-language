//Multiplication table
#include<stdio.h>
int main(){
	int a;
	int count=1;
	printf("Enter the number: ");
	scanf("%d",&a);
	if((a>='a' && a<='z') || (a>='A' && a<='Z'))
		printf("Invalid operator..\n");

	else{
	label:
		printf("%d x %d = %d\n", a, count, a*count);

	count++;
	if(count<=10)
		goto label;
	}
}

