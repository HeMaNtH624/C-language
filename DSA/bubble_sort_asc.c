#include<stdio.h>
int main()
{
	int arr[6], temp, i, j, n, k;
	printf("Enter the array elements: ");
	n = sizeof(arr)/sizeof(arr[0]);
	k=n-1;
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0; i<n-1; i++)
	{
		for(j=0; j<k; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		k--;
	}

	printf("Sorted array: ");

	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	printf("\n");
}
