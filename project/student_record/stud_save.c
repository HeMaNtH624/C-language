void stud_save(struct st *ptr)
{
        struct st* temp=ptr;
        FILE *fp=fopen("std_rcd.txt","a+");
        while(temp!=0)
        {       
                fprintf(fp, "%d %s %f\n", temp->roll, temp->name, temp->marks);
                temp=temp->next;        
        }
        fclose(fp);
}
