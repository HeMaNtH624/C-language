#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
	int num, rem, rev=0;
	pf("Enter the number: ");
	sf("%d",&num);

	while(num!=0){
		rem=num%10;
		rev = rev*10+rem;
		num=num/10;
	}
	pf("%d\n",rev);

}
