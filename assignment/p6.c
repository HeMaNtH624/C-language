
#include<stdio.h>
int main(){
	int a, b, count=1;
	printf("Enter two numbers: ");
	scanf("%d %d",&a, &b);
	label:
		printf("%d x %d = %d\t\t %d x %d = %d\n", a, count, a*count, b, count, b*count);

	count++;
	if(count<=10)
		goto label;

}
