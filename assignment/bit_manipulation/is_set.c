#include<stdio.h>
int main()
{
	int num, pos;
	printf("Enter the number and position: ");
	scanf("%d%d",&num,&pos);

	if(((num>>pos)&1)==0) printf("bit is clear\n");
	else printf("bit is set\n");
	
}
