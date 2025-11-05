#include<stdio.h>
int my_strcmp(char *p, char *q)
{
	int i;
	for(i=0; p[i] && q[i]; i++)
	{
		if(p[i] == q[i])
			continue;
		else break;

	}
	return q[i]-p[i];
}	

int main()
{
	char p[20], q[20];
	printf("Enter the first string: ");
	scanf("%[^\n]",p);

	printf("Enter the other string: ");
	scanf(" %[^\n]",q);

	int l = my_strcmp(p,q);

	if(l<0) 
		printf("s1 is greater %d\n",l);
	else if(l>0) 
		printf("s2 is greater %d\n",l);
	else printf("Both strings are equal\n");
}
