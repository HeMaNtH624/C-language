#include "header.c"
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


