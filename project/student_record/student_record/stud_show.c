void stud_show(struct st* ptr)
{
        struct st* temp=ptr;
        printf("|-----------------------------------------------------|\n");
        printf("|  roll  |     name                       |  marks    |\n");
        printf("|-----------------------------------------------------|\n");
        while(temp!=0)
        {
        printf("|   %d    |     %s                       |  %.2f    |\n", temp->roll, temp->name, temp->marks);
                temp=temp->next;
        }
        printf("|-----------------------------------------------------|\n");
}
