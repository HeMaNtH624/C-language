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
void add_middle(struct st **);
void add_end(struct st **);

int main()
{
	char op;
	struct st *hptr=0;
	do
	{
		add_middle(&hptr);
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

void add_end(struct st **ptr)
{
	struct st *temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter the data:\n");
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
	}
}

void add_middle(struct st **ptr)
{
	struct st *temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter the data\n");
	scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);

	if(*ptr==0)
	{
		temp->next=temp;
		*ptr=temp;
	}

	else if(temp->roll<(*ptr)->roll)
	{
		struct st* last=*ptr;
		while(last->next!=*ptr)
			last=last->next;

		temp->next=*ptr;
		last->next=temp;
		*ptr=temp;
	}

	else
	{
		struct st* last=*ptr;
		while(last->next!=*ptr && last->next->roll < temp->roll)
			last=last->next;
		
		temp->next=last->next;
		last->next=temp;
	}
}

void print(struct st *ptr)
{
	struct st *temp=ptr;
	do
	{
		printf("%d %s %f\n",temp->roll, temp->name, temp->marks);
		temp=temp->next;
	}
	while(temp!=ptr);
}
