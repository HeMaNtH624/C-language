#include<stdio.h>
void fibonacci(int, int, int);
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);

	fibonacci(n, 0, 1);
	printf("\n");
}

void fibonacci(int n, int prev, int pres)
{
	int next;
	if(prev<=n)
	{
		printf("%d ",prev);
		next = prev+pres;
		prev = pres;
		pres = next;
		fibonacci(n, prev, pres);
	}
}
