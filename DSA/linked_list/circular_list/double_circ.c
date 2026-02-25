#include<stdio.h>
#include<stdlib.h>

struct st
{
	struct st *prev;
	int roll;
	char name[20];
	float marks;
	struct st *next;
};

void add_begin(struct st **);
void add_middle(struct st **);
void add_end(struct st **);
void print(struct st *);

int main()
{
	char op;
	struct st* hptr=0;
	do
	{
		//add_begin(&hptr);
		//add_end(&hptr);
		add_middle(&hptr);
		printf("Do you want to add more\n");
		scanf(" %c",&op);
	}while(op=='y' || op=='Y');

	printf("\n\n");
	print(hptr);
	printf("\n");
}

void add_begin(struct st** ptr)
{
	struct st *temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter the data\n");
	scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);

	if(*ptr==0)
	{
		temp->next=temp;
		temp->prev=temp;
		*ptr=temp;
	}

	else
	{
		struct st *last=*ptr;
		while(last->next!=*ptr)
			last=last->next;

		last->next=temp;
		temp->next=*ptr;
		temp->prev=last;
		(*ptr)->prev=temp;

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
		temp->prev=temp;
		*ptr=temp;
	}

	else
	{
		struct st* last=*ptr;
		while(last->next!=*ptr)
			last=last->next;

		temp->next=last->next;
		last->next=temp;
		temp->prev=last;
		(*ptr)->prev=temp;
	}

}

void add_middle(struct st **ptr)
{
	struct st *temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter the data:\n");
	scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);

	if(*ptr==0)
	{
		temp->next=temp;
		temp->prev=temp;
		*ptr=temp;
	}

	else if(temp->roll < (*ptr)->roll)
	{
		struct st* last=*ptr;
		while(last->next!=*ptr)
			last=last->next;
		last->next=temp;
		temp->prev=last;
		temp->next=*ptr;
		(*ptr)->prev=temp;
		*ptr=temp;
	}

	else
	{
		struct st* last=*ptr;
		while((last->next!=*ptr) && (last->next->roll < temp->roll))
			last=last->next;

		temp->next=last->next;
		temp->prev=last;
		last->next->prev=temp;
		last->next=temp;

	}
}

void print(struct st* ptr)
{
	struct st *temp=ptr;
	do
	{
		printf("%d %s %f\n",temp->roll, temp->name, temp->marks);
		temp=temp->next;
	}
	while(temp!=ptr);
}
