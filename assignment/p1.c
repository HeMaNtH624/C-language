//program to check the given character a special charcter or alphabet or number

#include<stdio.h>
int main(){
	char a;
	printf("Enter any character: ");
	scanf("%c",&a);

	if(a>=97 && a<=122)
		printf("%c is a lower case alphabet\n",a);

	else if(a>=65 && a<=90)
		printf("%c is a Upper case alphabet\n",a);

	else if(a>=48 && a<=57)
		printf("%c is a digit\n",a);

	else
		printf("%c is a special character\n",a);	

}
