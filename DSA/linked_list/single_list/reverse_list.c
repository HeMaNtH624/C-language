#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct st
{
	int roll;
	char name[20];
	float marks;
	struct st* next;
}str;

void add_begin(struct st**);
void print(struct st *);
void reverse_list(struct st**, int);
int count(struct st *);
int main()
{
	char op;
	struct st *hptr=0;
	do
	{
		add_begin(&hptr);
		printf("Do you want to add another student details (y/n)\n");
		scanf(" %c",&op);
	}
	while(op=='y'||op=='Y');
	printf("before reversing\n");
	print(hptr);
	int c=count(hptr);

	printf("after reversing\n");
	reverse_list(&hptr, c);
	print(hptr);
}

void add_begin(struct st **ptr)
{
	struct st *temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter the student details:\n");
	scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);

	temp->next=*ptr;
	*ptr=temp;
}

void reverse_list(struct st **ptr, int c)
{
	struct st **a=(struct st**)malloc(c*sizeof(struct st*));
	//int c=count(*ptr);
	int i, j;
	for(i=0; i<c; i++)
	{
		a[i] = *ptr;
		*ptr=(*ptr)->next;
	}
	a[0]->next=0;
	for(i=1; i<c; i++)
	{
		a[i]->next = a[i-1];
	}	
	*ptr=a[c-1];
}

void print(struct st *ptr)
{
	struct st *temp=ptr;
	while(temp!=0)
	{
		printf("%d %s %f\n",temp->roll, temp->name, temp->marks);
		temp=temp->next;
	}
}

int count(struct st* ptr)
{
	struct st* temp = ptr;
	int count=0;
	while(temp!=0)
	{
		count++;
		temp=temp->next;
	}
	return count;
}

