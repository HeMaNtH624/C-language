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
void reverse_data(struct st*);
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
	reverse_data(hptr);
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

void reverse_data(struct st *ptr)
{
	struct st **a=(struct st**)malloc(sizeof(struct st*));
	int c=count(ptr);
	int i, j;
	for(i=0; i<c; i++)
	{
		a[i] = ptr;
		ptr=ptr->next;
	}
	int size=sizeof(str)-8;
	struct st temp;
	for(i=0, j=c-1; i<j; i++, j--)
	{
		memcpy(&temp, a[i], size);
		memcpy(a[i], a[j], size);
		memcpy(a[j], &temp, size);
	}	
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
}

