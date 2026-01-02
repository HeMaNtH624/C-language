#include<stdio.h>
#include<stdlib.h>
struct st
{
	int roll;
	char name[20];
	float marks;
	struct st*next;
};

void add_middle(struct st**);
void print(struct st*);
void save(struct st*);

int main()
{
	char op;
	struct st* hptr=0;
	do
	{
		add_middle(&hptr);
		printf("Do you want to add another student details(y/n)");
		scanf(" %c",&op);
	}
	while(op=='y'||op=='Y');
	print(hptr);
	save(hptr);
}

void add_middle(struct st **ptr)
{
	struct st* temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter student details\n");
	scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);

	if((*ptr==0)||(temp->roll<(*ptr)->roll))
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		struct st* last=*ptr;
		while((last->next!=0) && (temp->roll>last->next->roll))
			last=last->next;
		temp->next=last->next;
		last->next=temp;
	}
}


void print(struct st *ptr)
{
	struct st* temp=ptr;
	while(temp!=0)
	{
		printf("%d %s %f\n",temp->roll, temp->name, temp->marks);
		temp=temp->next;
	}
}

void save(struct st *ptr)
{
	struct st* temp=ptr;
	FILE *fp=fopen("mid.txt","w");
	while(temp!=0)
	{
		fprintf(fp, "%d %s %f\n", temp->roll, temp->name, temp->marks);
		temp=temp->next;
	}
	fclose(fp);
}
