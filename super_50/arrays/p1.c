#include<stdio.h>
int main()
{
int arr[] = {1, 2, 3, 4};
int *ptr = arr;
printf("%d", *(ptr++));
printf("%d",*(++ptr));
}
