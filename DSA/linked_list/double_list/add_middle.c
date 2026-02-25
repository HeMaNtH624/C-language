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

void add_middle(struct st**);
void print(struct st *);

int main()
{
	char op;
	struct st *hptr=0;
	do
	{
		add_middle(&hptr);
		printf("Do you want to add another student(y/n): \n");
		scanf(" %c", &op);
	}while(op=='y' || op=='Y');

	print(hptr);
}

void add_middle(struct st **ptr)
{
	struct st *temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter the data: \n");
	scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);

	if(*ptr==0 || temp->roll < (*ptr)->roll)
	{
		temp->next=*ptr;
		temp->prev=0;
		if(*ptr!=0)
			(*ptr)->prev=temp;
		*ptr=temp;
	}

	else
	{
		struct st* last=*ptr;
		while(last->next!=0 && last->next->roll < temp->roll)
			last=last->next;

		temp->next=last->next;
		temp->prev=last;
		if(last->next!=0)
			last->next->prev=temp;
		last->next=temp;
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
