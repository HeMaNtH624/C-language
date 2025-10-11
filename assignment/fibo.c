#include<stdio.h>
int main()
{
	int prev=0, pres=1, next, n, count=1;
	printf("Enter range: ");
	scanf("%d",&n);

	while(count<=n)
	{
		next=prev+pres;
		printf("%d ",prev);
		prev=pres;
		pres=next;
		count++;

	}
	printf("\n");
}
