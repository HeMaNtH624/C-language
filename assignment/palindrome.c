#include<stdio.h>
int main(){
	int rem, rev=0, num;
	printf("Enter the number: ");
	scanf("%d",&num);
	int temp=num;

	while(num!=0){
		rem=num%10;
		rev = rev*10+rem;
		num=num/10;
	}
	if(rev==temp) printf("Palindrome\n");
	else printf("Not a palindrome\n");
}
