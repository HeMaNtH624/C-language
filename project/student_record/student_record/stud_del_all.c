#include "header.c"
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


