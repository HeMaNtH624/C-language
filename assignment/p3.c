//Convert alphabet to upper or lower case

#include<stdio.h>
int main(){
	char ch, result;
	printf("Enter the character: ");
	scanf("%c",&ch);

	if(ch>=65 && ch<=90){
		result=ch+32;
		printf("Lower case of %c is %c\n",ch,result);
	}

	else if(ch>=97 && ch<=122){
		result=ch-32;
		printf("Upper case of %c is %c\n",ch, result);
	}

	else
		printf("Invalid input\n");
}
