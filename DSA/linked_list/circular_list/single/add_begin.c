#include<stdio.h>
#include<stdlib.h>

struct st
{
	int roll;
	char name[20];
	float marks;
	struct st *next;
};

void add_begin(struct st**);
void print(struct st *);

int main()
{
	char op;
	struct st *hptr=0;
	do
	{
		add_begin(&hptr);
		printf("Do you want to add one more student(y/n): ");
		scanf(" %c",&op);
	}while(op=='y' ||op =='Y');

	print(hptr);
}

void add_begin(struct st **ptr)
{
	struct st *temp=(struct st*)malloc(sizeof(struct st));
	printf("enter the data\n");
	scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);

	if(*ptr==0)
	{
		temp->next=temp;
		*ptr=temp;
	}

	else
	{
		struct st* last=*ptr;
		while(last->next!=*ptr)
			last=last->next;

		temp->next=*ptr;
		last->next=temp;
		*ptr=temp;
	}
}

void print(struct st *ptr)
{
	struct st *temp=ptr;
	do
	{
		printf("%d %s %f\n", ptr->roll, ptr->name, ptr->marks);
		ptr=ptr->next;
	}while(temp!=ptr);
}
