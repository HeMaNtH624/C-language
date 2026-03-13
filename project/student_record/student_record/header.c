#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int id=1;
short int arr[100]={0};
struct st
{
	int roll;
	char name[20];
	float marks;
	struct st* next;
};

int count(struct st* );
void rev_list(struct st**);
void stud_add(struct st **);
void stud_show(struct st*);
void stud_save(struct st *);
void stud_del(struct st **);
void stud_exit(struct st*);
void del_all(struct st**);
void stud_sort(struct st*);

void stud_add(struct st **ptr)
{
	struct st* temp=(struct st*)malloc(sizeof(struct st));
	for(int i=0; i<100; i++)
	{
		if(arr[i]==0)
		{
			temp->roll=i+1;
			arr[i]=i+1;
			break;
		}	
	}
	printf("\tEnter name and marks of a student\n\t");
	scanf("%s%f",temp->name, &temp->marks);

	if((*ptr==0)||temp->roll<(*ptr)->roll)
	{
		temp->next=*ptr;
		*ptr=temp;
	}

	else
	{
		struct st* last=*ptr;
		while((last->next!=0)&&(temp->roll)>(last->next->roll))
			last=last->next;
		temp->next=last->next;
		last->next=temp;
	}
}

void stud_show(struct st* ptr)
{
	struct st* temp=ptr;
	printf("|-------------------------------------------|\n");
	printf("| %-10s | %-15s | %-10s |\n", "Roll", "Name", "Marks");	
	printf("|-------------------------------------------|\n");
	while(temp!=0)
	{
		printf("| %-10d | %-15s | %-10.2f |\n",temp->roll,temp->name,temp->marks);

		temp=temp->next;	
	}
	printf("|-------------------------------------------|\n");
}



void stud_save(struct st *ptr)
{
	struct st* temp=ptr;
	FILE *fp=fopen("std_rcd.txt","w");
	fprintf(fp,"|-------------------------------------------|\n");
	fprintf(fp,"| %-10s | %-15s | %-10s |\n", "Roll", "Name", "Marks");	
	fprintf(fp,"|-------------------------------------------|\n");
	while(temp!=0)
	{
		fprintf(fp,"| %-10d | %-15s | %-10.2f |\n",temp->roll,temp->name,temp->marks);

		temp=temp->next;	
	}
	fprintf(fp,"|-------------------------------------------|\n");
	fclose(fp);
}

void stud_del(struct st **ptr)
{
	char op, s[20];
	int n;
	printf("\tr/R Enter roll to delete\n");
	printf("\tn/N Enter name to delete\n");
	printf("\t");
	scanf(" %c",&op);
	
	struct st* temp=*ptr;
	struct st* prev;
	if(op=='r'||op=='R')
	{
		printf("\tEnter the roll number: ");
		printf("\t");
		scanf("%d",&n);

		while(temp!=0)
		{
		if(temp->roll==n)
		{
			arr[(temp->roll)-1]=0;
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

	else if(op=='n'||op=='N')
	{
		printf("\tEnter the name: ");
		printf("\t");
		scanf(" %s", s);
		while(temp!=0)
		{
		if((strcmp(temp->name,s))==0)
		{
			arr[(temp->roll)-1]=0;
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
}

void stud_exit(struct st *ptr)
{
	printf("\ts/S save and exit\n");
	printf("\te/E exit wthout saving\n");
	printf("\t");
	char op;
	scanf(" %c", &op);
	if(op=='s'||op=='S')
	{
		stud_save(ptr);
		exit(0);
	}
	else 
		exit(0);
}

void del_all(struct st** ptr)
{
	struct st* temp;
	while(*ptr!=0)
	{
		temp=*ptr;
		*ptr=temp->next;
		free(temp);
	}
}

void rev_list(struct st** ptr)
{
	int cnt = count(*ptr);
	struct st** a=(struct st**)malloc(cnt*sizeof(struct st*));
	int i,j;
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

int count(struct st* ptr)
{
	struct st* temp=ptr;
	int cnt=0;
	while(temp!=0)
	{
		cnt++;
		temp=temp->next;
	}

	return cnt;
}


void stud_sort(struct st* ptr)
{
	struct st *i, *j;
	int tempr;
	float tempm;
	char tempn[20], op;
	printf("\tn/N sort by name\n");
	printf("\tm/M sort by marks\n");
	printf("\t");
	scanf(" %c",&op);
	if(op=='n'||op=='N')
	{
		for(i=ptr;i!=0; i=i->next)
		{
			for(j=i->next; j!=0; j=j->next)
			{
				if((strcmp(i->name,j->name))>0)
				{
					tempr=i->roll;
					i->roll=j->roll;
					j->roll=tempr;
	
					strcpy(tempn, i->name);
					strcpy(i->name, j->name);
					strcpy(j->name, tempn);

					tempm=i->marks;
					i->marks=j->marks;
					j->marks=tempm;
				}
			}
		}
	}

	if(op=='m'||op=='M')
	{
		for(i=ptr; i!=0; i=i->next)
		{
			for(j=i->next; j!=0; j=j->next)
			{
				if(i->marks>j->marks)
				{

					tempr=i->roll;
					i->roll=j->roll;
					j->roll=tempr;

					strcpy(tempn, i->name);
					strcpy(i->name, j->name);
					strcpy(j->name, tempn);
	
					tempm=i->marks;
					i->marks=j->marks;
					j->marks=tempm;
				}
			}
		}
	}
}
