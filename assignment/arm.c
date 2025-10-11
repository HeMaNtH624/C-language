//To check if it's armstrong or not

#include<stdio.h>
#include<math.h>
int main()
{
	int num, rem, count=0, res=0;
       	printf("Enter the number: ");
	scanf("%d",&num);
	
	int temp = num;
	int temp2 = num;
	while(temp!=0){
		temp=temp/10;
		count++;
	}
	
	while(num!=0){
		rem = num%10;
		res = res+pow(rem, count);
		num/=10;
	}	

	if(temp2 == res) printf("Armstrong Number\n");
	else printf("Not an armsdtrong number\n");
}
