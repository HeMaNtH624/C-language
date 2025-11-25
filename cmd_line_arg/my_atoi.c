#include<stdio.h>
int my_atoi(char *);
int main(int a, char *s[])
{
	char *x = (char *)s[1];
	printf("%s\n", x);
	printf("%d\n",my_atoi(s[1]));
}

int my_atoi(char *x)
{
	int i=0, sum=0;
	if(x[0] == '-' || x[0] == '+')
		i=1;

	for(; x[i]; i++)
	{
		if(x[i]>='0' && x[i]<='9')
		{
			sum = sum*10 + (x[i]-48);
		}
	}

	if(x[0] == '-')
		return -sum;
	else return sum;
}
	
