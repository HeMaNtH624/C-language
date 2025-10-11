#include<stdio.h>
#include<unistd.h>
int main(){
	printf("Helooo...\n");
label:
	printf("I'm Hemanth...\n");
	printf("I'm from vizag...\n");
	sleep(1);
	goto label;
	printf("I'm out of the loop...\n");
}
