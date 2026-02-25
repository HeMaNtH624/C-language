#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	FILE *fp=fopen(argv[2], "r");
	char a[50];
	while((fgets(a, 50, fp))!=NULL)
	{
		if((strstr(a, argv[1]))!=NULL)
			printf("%s",a);
	}
	printf("\n");
}
