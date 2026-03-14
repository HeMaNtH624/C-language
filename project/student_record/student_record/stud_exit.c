#include "header.c"
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

