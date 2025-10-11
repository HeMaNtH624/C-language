#include<stdio.h>
#define pf printf
#define sf scanf
void prime(int n);
int main(){
 int num;
 pf("Enter the number:");
 sf("%d",&num);

 prime(num);

}

void prime(int n){
 if(n<=1){
	 pf("%d is not a prime number.\n",n);
	 return;
 }

 for(int i=2; i<n; i++){
	 if(n%i==0){
		 pf("%d is not a prime number.\n",n);
		 return;
	 }
}

	 pf("%d is a prime number\n",n);
}
