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
void print(struct st *);

int main()
{
	char op;
	struct st *hptr=0;
	do 
	{
		add_begin(&hptr);
		printf("Do you want to add one more data (y/n)");
		scanf(" %c",&op);
	}
	while(op=='y' || op=='Y');
	print(hptr); 
} 

void add_begin(struct st **ptr)
{
	struct st *temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter the student details\n");
	scanf("%d %s %f", &temp->roll, temp->name, &temp->marks);

	if(*ptr==0)
	{
		temp->prev=*ptr;
		temp->next=*ptr;
		*ptr=temp;
	}

	else
	{
		temp->next=*ptr;
		temp->prev=0;
		(*ptr)->prev=temp;
		*ptr=temp;
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
