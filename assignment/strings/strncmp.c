#include<stdio.h>
int my_strncmp(char *p ,char *q, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(p[i] != q[i]) break;
	}
	return q[i]-p[i];
}

int main()
{
	char p[20], q[20];
	int n;
	printf("Enter the string: ");
	scanf("%[^\n]",p);

	printf("Enter the other string: ");
	scanf(" %[^\n]",q);

	printf("Enter the number of bites to be compared: ");
	scanf("%d",&n);

	int l = my_strncmp(p,q,n);

	if(l<0) printf("S1 is greater\n");
	else if (l>0) printf("S2 is greater\n");
	else printf("Equal\n");
}
