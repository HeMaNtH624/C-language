#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
void reverse_data(struct st*);
int count(struct st *);

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
	printf("\nbefore reversing data\n");
	print(hptr);

	reverse_data(hptr);

	printf("\nafter reversing the data\n");
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
	}
}

void print(struct st* ptr)
{
	struct st * temp=ptr;
	while(temp!=0)
	{
		printf("%d %s %f\n",temp->roll, temp->name, temp->marks);
		temp=temp->next;
	}
}

void reverse_data(struct st *ptr)
{
	struct st * p1,* p2;
	p1=ptr;
	p2=ptr;
	int size=sizeof(struct st)-16;
	while(p2->next!=0)
	{
		p2=p2->next;
	}

	struct st temp;
	int c=count(ptr), i;

	for(i=0; i<c/2; i++)
	{
		memcpy(&temp.roll, &p1->roll, size);
		memcpy(&p1->roll, &p2->roll, size);
		memcpy(&p2->roll, &temp.roll, size);
		p1=p1->next;
		p2=p2->prev;

	}
}

int count(struct st *ptr)
{
	int count;
	struct st* temp=ptr;
	while(temp!=0)
	{	
		count++;
		temp=temp->next;
	}

	return count;
} 
