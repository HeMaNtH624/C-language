#include<stdio.h>
int main(){
	int age;
       	char sex;
       	float height, weight, bmi;
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Enter your gender: ");
	scanf(" %c",&sex);
	printf("Enter your height in meters: ");
	scanf("%f",&height);
	printf("Enter your weight in kilograms: ");
	scanf("%f",&weight);

	bmi = weight/(height*height);

	if(bmi<=18.5){
		printf("Your Body Mass Index is %.2f and you're underweight.\n",bmi);
	}
	else if(bmi>18.5 && bmi<=25)
	       printf("Your body mass index is %.2f and you're healthy\n",bmi);	

	else if(bmi>25 && bmi<=30)
		printf("Your Body Mass Index is %.2f and you're Overweigh\n",bmi);
	
	else if(bmi>=35)
		printf("Your Body Mass Index is %.2f and you're Obessed\n",bmi);

	else 
		printf("Invalid Input.\n");

	
	return 0;
}
//the end
