#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character: ");
	scanf("%c",&ch);


	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
	if(ch == 'a' || ch == 'A' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
		printf("Given char is a vowel\n");

	else printf("Given character is a consonant\n");
	}

	else printf("Invalid character\n");
}
