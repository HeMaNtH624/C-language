#include "header.c"
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

