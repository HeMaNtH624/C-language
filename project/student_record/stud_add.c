#include<stdlib.h>
void stud_add(struct st **ptr)
{
        struct st* temp=(struct st*)malloc(sizeof(struct st));
        temp->roll=id;
        id++;
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

