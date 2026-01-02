#include<stdio.h>
#include<stdlib.h>

struct st
{
	int id;
	char name[20];
	float salary;
	struct st *next;
};

void add_begin(struct st **);
void print(struct st *);
void delete_node(struct st **ptr, int n);

int main()
{
	struct st* hptr=0;
	char op;
	do
	{	
		add_begin(&hptr);
		printf("do you want to add one more employee(y/n)\n");
		scanf(" %c",&op);
	}
	while(op=='y' || op=='Y');
	
	printf("\n");
	printf("original data\n");
	print(hptr);

	printf("\n");
	printf("modified data\n");
	delete_node(&hptr,3);
	print(hptr);
}

void add_begin(struct st** ptr)
{
	struct st* temp=(struct st*)malloc(sizeof(struct st));
	
	printf("Enter the employee details\n");
	scanf("%d %s %f",&temp->id, temp->name, &temp->salary);

	temp->next=*ptr;
	*ptr=temp;
}

void print(struct st* ptr)
{
	struct st *temp=ptr;
	while(temp!=0)
	{
		printf("%d %s %f\n", temp->id, temp->name, temp->salary);
		temp=temp->next;
	}
}

void delete_node(struct st **ptr, int n)
{
	struct st *temp=*ptr;
	struct st* prev;
	
	while(temp!=0)
	{
		if(temp->id==n)
		{
			if(temp==*ptr)
				*ptr=temp->next;
			else
				prev->next=temp->next;

			free(temp);
			break;
		}

		else
		{
			prev=temp;
			temp=temp->next;
		}
	}
}
