#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct st
{
	int roll;
	char name[20];
	float marks;
	struct st* next;
};

void add_end(struct st**);
void print(struct st *);
void save(struct st *);
void reverse_link(struct st *, int);
int count(struct st*);
int main()
{
	char op;
	struct st *hptr=0;
	do
	{
		add_end(&hptr);
		printf("Do you want to add another student details (y/n)\n");
		scanf(" %c",&op);
	}
	while(op=='y' || op=='Y');
	int c=count(hptr);
	reverse_link(hptr,c);
	print(hptr);
	save(hptr);
}

void add_end(struct st **ptr)
{
	struct st *temp = (struct st*)malloc(sizeof(struct st));
	printf("Enter the student details:\n");
	scanf("%d %s %f", &(*temp).roll, (*temp).name, &(*temp).marks);
	
	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
	}

	else
	{
		struct st *last=*ptr;
		while(last->next!=0)
			last=last->next;

		temp->next=last->next;
		last->next=temp;
	}

}

void print(struct st* ptr)
{
	struct st *temp=ptr;
	//printf("roll	name	marks\n");
	while(temp!=0)
	{
		printf("%d %s %f\n", temp->roll, temp->name, temp->marks);
		temp=temp->next;
	}
}

void save(struct st* ptr)
{
	struct st* temp=ptr;
	FILE* fd=fopen("end_std.txt", "w");
	//fprintf(fd, "roll	name	marks\n");
	while(temp!=0)
	{
		fprintf(fd, "%d %s %f\n", temp->roll, temp->name, temp->marks);
		temp=temp->next;
	}
	fclose(fd);
}

void reverse_link(struct st* ptr, int c)
{
	int i, j;
	struct st **a = (struct st**)malloc(c*sizeof(struct st*));

	for(i=0; i<c; i++)
	{
		a[i]=ptr;
		ptr=ptr->next;
	}

	struct st temp;
	int size = sizeof(struct st)-8;
	for(i=0, j=c-1; i<c; i++, j--)
	{
		memcpy(&temp, a[i], size);
		memcpy(a[i], a[j], size);
		memcpy(a[j], &temp, size);
	}
}

int count(struct st *ptr)
{
	int cnt=0;
	struct st *temp=ptr;
	while(temp!=0)
	{
		cnt++;
		temp=temp->next;
	}
	return cnt;
}
