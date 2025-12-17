#include<stdio.h>
int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");

	if(fp == NULL)
		printf("File not found\n");

	else 
		printf("File existed\n");
}
