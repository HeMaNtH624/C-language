#include "header.c"
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

