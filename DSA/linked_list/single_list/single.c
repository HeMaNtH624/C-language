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

void add_middle(struct st **);
void add_end(struct st **);
void add_begin(struct st **);
void reverse_data(struct st *);
void reverse_list(struct st **);
void delete_all(struct st **);
void delete_node(struct st **, int );
void print(struct st *);
void save(struct st*);
int count(struct st *);

int main()
{
	char op;
	struct st *hptr=0;
	do
	{
		add_begin(&hptr);
		//add_middle(&hptr);
		//add_end(&hptr);
		printf("do you want to add one more student(y/n)\n");
		scanf(" %c",&op);
	}
	while(op=='y' || op=='Y');
	printf("\n\n");
	printf("The original data\n");
	print(hptr);
	save(hptr);
	
	printf("\n\n");
	printf("The modified data\n");
	reverse_data(hptr);
	//reverse_link(&hptr);
	//delete_node(&hptr, 12);
	//delete_all(&hptr);
	
	print(hptr);
	printf("\n\n");

}

void add_begin(struct st **ptr)
{
	struct st *temp=(struct st*)malloc(sizeof(struct st));

	printf("Enter the data:\n");
	scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);

	temp->next=*ptr;
	*ptr=temp;
}

void add_end(struct st **ptr)
{
	struct st* temp=(struct st*)malloc(sizeof(struct st));

	printf("Enter the details\n");
	scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);

	if(*ptr==0)
	{
		temp->next=0;
		*ptr=temp;
	}

	else
	{
		struct st* last=*ptr;
		while(last->next!=0)
			last=last->next;

		temp->next=last->next;
		last->next=temp;
	}
}

void add_middle(struct st** ptr)
{
	struct st* temp=(struct st*)malloc(sizeof(struct st));
	
	printf("Enter the data\n");
	scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);

	if(*ptr==0 || temp->roll<(*ptr)->roll)
	{
		temp->next=*ptr;
		*ptr=temp;
	}

	else
	{
		struct st* last=*ptr;
		while((last->next!=0)&&((last->next->roll)<(temp->roll)))
			last=last->next;

		temp->next=last->next;
		last->next=temp;
	}
}

void reverse_data(struct st *ptr)
{
	int cnt=count(ptr), i, j;
	struct st **arr=(struct st**)malloc(sizeof(struct st*));
	//struct st *v=ptr;
	for(i=0; i<cnt; i++)
	{
		arr[i]=ptr;
		ptr=ptr->next;
	}

	int size=sizeof(struct st)-8;
	struct st temp;

	for(i=0, j=cnt-1; i<j; i++, j--)
	{
		memcpy(&temp, arr[i], size);
		memcpy(arr[i], arr[j], size);
		memcpy(arr[j], &temp, size);
	}
}

int count(struct st* ptr)
{
	int cnt;
	struct st* temp=ptr;
	while(temp!=0)
	{
		cnt++;
		temp=temp->next;
	}
	return cnt;

}

void reverse_link(struct st** ptr)
{
	int i, j, cnt=count(*ptr);
	//struct st* temp=*ptr;
	struct st **a=(struct st**)malloc(cnt*sizeof(struct st*));
	for(i=0; i<cnt; i++)
	{
		a[i]=*ptr;
		*ptr=(*ptr)->next;
	}

	a[0]->next=0;
	for(i=1; i<cnt; i++)
	{
		a[i]->next=a[i-1];
	}
	*ptr=a[cnt-1];

}

void delete_all(struct st **ptr)
{
	struct st* temp;
	while(*ptr!=0)
	{
		temp=*ptr;
		*ptr=temp->next;
		free(temp);
	}
}

void delete_node(struct st **ptr, int n)
{
	struct st *prev;
	struct st* temp=*ptr;
	while(temp!=0)
	{
		if(temp->roll==n)
		{
			if(*ptr==temp)
				*ptr=temp->next;
			else
				prev->next=temp->next;

			free(temp);
			return;
		}

		else
		{
			prev=temp;
			temp=temp->next;
		}
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

void save(struct st *ptr)
{
	struct st *temp=ptr;
	FILE *fp=fopen("single.txt","w");
	while(temp!=0)
	{
		fprintf(fp, "%d %s %f\n", temp->roll, temp->name, temp->marks);
		temp=temp->next;
	}
}
