#include<stdio.h>
int main()
{
	int arr[7], n, temp, i, j;
	printf("Enter the elements: ");
	n = sizeof(arr)/sizeof(arr[0]);
	
	for(i=0 ;i<n; i++)
		scanf("%d",&arr[i]);

	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("Sorted array: ");
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
