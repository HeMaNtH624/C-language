#include"header.c"
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

