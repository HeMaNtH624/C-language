#include<stdio.h>       
float my_atof(char *);
int main(int c, char **s[])
{
	char *x = (char *)s[1];
	printf("%f\n",my_atof(x));
}
float my_atof(char *x)
{
	int i = 0, sum2 = 0, sum = 0, pro = 1;
	if(x[0] == '-' || x[0] == '+')
		i = 1;

	for(;x[i]!='.'; i++)
	{
		if(x[i] >= '0' && x[i] <= '9')
			sum = sum*10 + (x[i] - 48);
	}

	for(int j = i+1; x[j]; j++)
	{
		if(x[i] >= '0' && x[i] <= '9')
		{
			pro = pro*10;
			sum2 = sum2+((x[j]-48)/pro);
		}
	}

	return sum+sum2;
}
