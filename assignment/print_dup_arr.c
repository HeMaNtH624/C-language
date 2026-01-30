#include<stdio.h>
int main()
{
	int a[] = {10, 20, 30, 30, 40, 10, 20};
	int i, j, n = sizeof(a)/sizeof(a[0]);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i] == a[j])
				break;
			
			if(i == j)
			{
				for(j=i+1; j<n; j++){
					if(a[i] == a[j])
						printf("%d ", a[i]);
				}

			}
	}
}
}
