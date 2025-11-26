#include<stdio.h>

int sum(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int pro(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}

int main()
{
	int (*fp)(int, int);
	int a, b;
	char op;
	printf("Enter the two numbers: ");
	scanf("%d%d",&a,&b);

	printf("Enter the operator: ");
	scanf(" %c",&op);

	switch(op)
	{
		case '+' : fp = sum; break;
		case '-' : fp = sub; break;
		case '*' : fp = pro; break;
		case '/' : fp = div; break;
		default : printf("invalid operator\n"); break;
	}	

	int c = fp(a,b);
	printf("result: %d\n",c);

}
