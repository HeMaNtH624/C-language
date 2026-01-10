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

void add_end(struct st **);
void print(struct st *);

int main()
{
	struct st *hptr=0;
	char op;
	do
	{
		add_end(&hptr);
		printf("do you want to add one more student(y/n)\n");
		scanf(" %c",&op);
	}
	while(op=='y' || op=='Y');
	print(hptr);
}

void add_end(struct st **ptr)
{
	struct st* temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter the student details :\n");
	scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);

	if(*ptr==0)
	{
		temp->next=*ptr;
		temp->prev=*ptr;
		*ptr=temp;
	}

	else
	{
		struct st *last=*ptr;
		while(last->next!=0)
			last =last->next;

		last->next=temp;
		temp->prev=last;
		temp->next=0;
	}
}

void print(struct st *ptr)
{
	struct st *temp=ptr;
	while(temp!=0)
	{
		printf("%d %s %f\n", temp->roll, temp->name, temp->marks);
		temp=temp->next;
	}
}
