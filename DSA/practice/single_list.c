#include<stdio.h>
#include<stdlib.h>
struct st
{
	int roll;
	char name[20];
	struct st *next;
};

void add_begin(struct st**);
void add_middle(struct st**);
void print(struct st *);

int main()
{
	struct st *hptr=0;
	char op;
	do
	{
		add_middle(&hptr);
		printf("do you want to add another node:");
		scanf(" %c",&op);
	}
	while(op=='y' || op=='Y');
	print(hptr);
}

void add_begin(struct st **ptr)
{
	 struct st *temp = (struct st*)malloc(sizeof(struct st));
	 printf("Enter the data: ");
	 scanf("%d %s",&temp->roll, temp->name);

	 temp->next=*ptr;
	 *ptr=temp;
}

void add_middle(struct st **ptr)
{
	 struct st *temp = (struct st*)malloc(sizeof(struct st));
	 printf("Enter the data: ");
	 scanf("%d %s",&temp->roll, temp->name);

	 if((*ptr==0)||(temp->roll<(*ptr)->roll))
	 {
		 temp->next=*ptr;
		 *ptr=temp;
	 }

	 else
	 {
		 struct st *last=*ptr;
		 while((last->next!=0)&&(temp->roll>last->next->roll))
			 last=last->next;
		 temp->next=last->next;
		 last->next=temp;
	 }
}

void print(struct st *ptr)
{
	struct st *temp=ptr;
	while(temp!=0)
	{
		printf("%d %s\n", temp->roll, temp->name);
		temp=temp->next;
	}
}


