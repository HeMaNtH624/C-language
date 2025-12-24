#include<stdio.h>

struct st
{
	int roll;
	char name[20];
	float marks;
	struct st*next;
};

struct st *hptr=0;
void add_begin();
void print();
void save();
int main()
{
	char op;
	do
	{
		printf("Enter student details (roll, name, marks)\n");
		add_begin();
		printf("do you want to add another student details (y/n)\n");
		scanf(" %c",&op);
	}
	while(op == 'y');
	print();
	save();
}

void add_begin()
{
	struct st *temp;
	temp = (struct st*)malloc(sizeof(struct st));

	scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);
	
	temp->next = hptr;
	hptr = temp;
}

void print()
{
	struct st *ptr;
	ptr = hptr;
	while(ptr!=0)
	{
		printf("%d %s %f\n", ptr->roll, ptr->name, ptr->marks);
		ptr = ptr->next;
	}
}

void save()
{
	FILE *fp = fopen("std_record.txt", "w");
	struct st *ptr;
	ptr = hptr;
	while(ptr!=0)
	{
		fprintf(fp, "%d %s %f\n", ptr->roll, ptr->name, ptr->marks);
		ptr = ptr->next;
	}
}
