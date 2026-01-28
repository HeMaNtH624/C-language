#include<stdio.h>
void prime(int);
int main()
{
	int n;
	int j;
	for(j=2; j<1000; j++)
	prime(j);
	printf("\n");
}

void prime(int n)
{
	
	int i = 2; count = 0;
	while(i<=n/2)
	{
		if(n%i==0)
			count++;
		i++;
		//prime(n, i, count);
	}
	//else
	//{
		if(count==0) 
			printf("%d ",n);
	//}
	

}
