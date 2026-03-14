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
void stud_modify(struct st**, char);

/*void stud_add(struct st **ptr)
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
	printf("\t|-------------------------------------------|\n");
	printf("\t| %-10s | %-15s | %-10s |\n", "Roll", "Name", "Marks");	
	printf("\t|-------------------------------------------|\n");
	while(temp!=0)
	{
		printf("\t| %-10d | %-15s | %-10.2f |\n",temp->roll,temp->name,temp->marks);

		temp=temp->next;	
	}
	printf("\t|-------------------------------------------|\n");
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
	printf("\t|----------------------------------|\n");
	printf("\t|   r/R Enter roll to delete       |\n");
	printf("\t|   n/N Enter name to delete       |\n");
	printf("\t|----------------------------------|\n");
	printf("\t|----------------------------------|\n");
	printf("\t|Enter your choice: ");
	scanf(" %c",&op);
	
	struct st* temp=*ptr;
	struct st* prev;
	if(op=='r'||op=='R')
	{
		printf("\t|--------------------------|\n");
		printf("\t| Enter the roll number:  ");
		scanf("%d",&n);
		printf("\t|--------------------------|\n");

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
	else
	{
		printf("\tInvalid option...\n");
		return;
	}
}

void stud_exit(struct st *ptr)
{
	printf("\t|----------------------------|\n");
	printf("\t|  s/S save and exit         |\n");
	printf("\t|  e/E exit wthout saving    |\n");
	printf("\t|----------------------------|\n");
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
	printf("\t|---------------------------|\n");
	printf("\t|   n/N sort by name        |\n");
	printf("\t|   m/M sort by marks       |\n");
	printf("\t|---------------------------|\n");
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

void stud_modify(struct st **ptr, char op)
{

	char dec;
	int n;
	float f;
	char s[20];
	struct st *temp=*ptr;
	if(op=='0')
	{
		printf("\t|-------------------------------------------------|\n");
		printf("\t|   which record to search for modification       |\n");
		printf("\t|    r/R : to search a roll no                    |\n");
		printf("\t|    n/N : to search a name                       |\n");
		printf("\t|    m/M : marks based                            |\n");
		printf("\t|-------------------------------------------------|\n");
		printf("\t");
		scanf(" %c",&op);
	}

	if(op=='r'||op=='R')
	{
		printf("\t----------------------------\n");
		printf("\t   Enter the roll no: ");
		scanf("%d",&n);
		while(temp!=0)
		{
			if(temp->roll==n)
			{
				printf("\t-----------------------------------\n");
				printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
				printf("\n");
				printf("\t|----------------------------|\n");
				printf("\t|    n/N change name         |\n");
				printf("\t|    p/P change percentage   |\n");
				printf("\t|----------------------------|\n\t");
				scanf(" %c",&dec);
				if(dec=='n'||dec=='N')
				{
					printf("\t--------------------------------\n");
					printf("\t   Enter the new name: ");
					scanf(" %s", s);
					strcpy(temp->name, s);
					break;
				}
				else if(dec=='p'|| dec=='P')
				{
					printf("\t------------------------\n");
					printf("\t   Enter new marks: ");
					scanf("%f",&f);
					temp->marks=f;
					break;
				}
				else
				{
					printf("\t---INVALID INPUT---\n");
					return;
				}
			}
			temp=temp->next;
		}	
	}

	else if(op=='n'||op=='N')
	{
		char cnt=0;
		printf("\t-----------------------------\n");
		printf("\t  Enter the name: ");
		scanf(" %s",s);
		while(temp!=0)
		{
			if((strcmp(s,temp->name))==0)
			{
				cnt++;
			}
			temp=temp->next;
		}

		if(cnt==0)
		{
			printf("\t Name not found\n");
			return;
		}

		else if(cnt==1)
		{
			temp=*ptr;
			while(temp!=0)
			{
				if((strcmp(temp->name, s))==0)
				{
					printf("\t-----------------------------------\n");
					printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
					printf("\n");
					printf("\t|----------------------------|\n");
					printf("\t|    n/N change name         |\n");
					printf("\t|    p/P change percentage   |\n");
					printf("\t|----------------------------|\n\t");
					scanf(" %c",&dec);

					if(dec=='n'||dec=='N')
					{
						printf("\t--------------------------------\n");
						printf("\t   Enter the new name: ");
						scanf(" %s", s);
						strcpy(temp->name, s);
						break;
					}
					else if(dec=='p'|| dec=='P')
					{
						printf("\t------------------------\n");
						printf("\t   Enter new marks: ");
						scanf("%f",&f);
						temp->marks=f;
						break;
					}
				}
				temp=temp->next;
			}
		}

		else if(cnt>1)
		{
			printf("\t Multiple names found Enter the roll\n");
			printf("\t-----------------------------------\n");
			temp=*ptr;
			while(temp!=0)
			{
				if((strcmp(temp->name, s))==0)
				{
					printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
				}
				temp=temp->next;
			}

			stud_modify(ptr, 'r');
		}
		
	}

	else if(op=='m'||op=='M')
	{

		char cnt=0;
		printf("\t-----------------------------\n");
		printf("\t  Enter the percentage: ");
		scanf("%f",&f);
		while(temp!=0)
		{
			if(temp->marks==f)
			{
				cnt++;
			}
			temp=temp->next;
		}

		if(cnt==0)
		{
			printf("\t not found\n");
			return;
		}

		else if(cnt==1)
		{
			temp=*ptr;
			while(temp!=0)
			{
				if(temp->marks==f)
				{
					printf("\t-----------------------------------\n");
					printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
					printf("\n");
					printf("\t|----------------------------|\n");

					printf("\t|    n/N change name         |\n");
					printf("\t|    p/P change percentage   |\n");
					printf("\t|----------------------------|\n\t");
					scanf(" %c",&dec);

					if(dec=='n'||dec=='N')
					{
						printf("\t--------------------------------\n");
						printf("\t   Enter the new name: ");
						scanf(" %s", s);
						strcpy(temp->name, s);
						break;
					}
					else if(dec=='p'|| dec=='P')
					{
						printf("\t------------------------\n");
						printf("\t   Enter new marks: ");
						scanf("%f",&f);
						temp->marks=f;
						break;
					}
				}
				temp=temp->next;
			}
		}

		else if(cnt>1)
		{
			printf("\t Multiple students found!! Enter the roll\n");
			printf("\t-----------------------------------\n");
			temp=*ptr;
			while(temp!=0)
			{
				if(temp->marks==f)
				{
					printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
				}
				temp=temp->next;
			}

			stud_modify(ptr, 'r');
		}
		
	}
}*/
