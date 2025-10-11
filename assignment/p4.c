//largest among 3 numbers

#include<stdio.h>
int main(){
	int num1, num2, num3, largest;

	printf("Enter 3 numbers: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	if(num1>num2 && num1>num3)
		printf("%d is the greatest among %d, %d and %d\n",num1, num1, num2, num3);  

	else if(num2>num1 && num2>num3)
		printf("%d is the greatest among %d, %d and %d\n",num2, num1, num2, num3);

	else if(num3>num1 && num3>num2)	
		printf("%d is the greatest among %d, %d and %d\n",num3, num1, num2, num3);

	else if((num1==num2) && num1 > num3)
		printf("%d and %d is equal and %d is the largest\n",num1,num2,num1);

	else if((num1==num3) && num1 > num2)
		printf("%d and %d is equal and %d is the largest\n",num1,num3,num1);

	else if((num2==num3) && num2 > num1)		
		printf("%d and %d is equal and %d is the largest\n",num2,num3,num2);

	else if((num2==num1) && num2 > num3)
		printf("%d and %d is equal and %d is the largest\n",num1,num2,num2);

	else if((num3==num1) && num3 > num2)
		printf("%d and %d is equal and %d is the largest\n",num1,num3,num3);

	else if((num3==num2) && num3 > num1)
		printf("%d and %d is equal and %d is the largest\n",num3,num2,num3);

	else if((num1==num2) && (num2==num3))
		printf("All the numbers are equal\n");

	else
		printf("Invalid operator\n");

}
