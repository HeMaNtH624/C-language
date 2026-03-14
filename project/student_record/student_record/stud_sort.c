#include "header.c"
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

