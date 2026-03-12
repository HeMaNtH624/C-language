#include "header.c"
int main()
{
	char op, dec;
	struct st* hptr=0;
	system("clear");

	/*printf("\t|------------------------------------|\n");
	printf("\t|       ***STUDENT RECORD***         |\n");
	printf("\t|  ________________________________  |\n");
	printf("\t|                                    |\n");
	printf("\t| a/A : Add new record               |\n");
    	printf("\t| d/D : Delete a record              |\n");
	printf("\t| s/S : Show the list		     |\n");
       	printf("\t| m/M : Modify the record            |\n");
	printf("\t| v/V : Save the list                |\n");
	printf("\t| e/E : exit			     |\n");
	printf("\t| t/T : sort the list		     |\n");
	printf("\t| l/L : Delete all the records       |\n");
	printf("\t| r/R : Reverse the list             |\n");
	printf("\t|____________________________________|\n");   
	printf("\n");*/
	do{
		printf("\t|------------------------------------|\n");
		printf("\t|       ***STUDENT RECORD***         |\n");
		printf("\t|  ________________________________  |\n");
		printf("\t|                                    |\n");
		printf("\t| a/A : Add new record               |\n");
   	  	printf("\t| d/D : Delete a record              |\n");
		printf("\t| s/S : Show the list		     |\n");
       		printf("\t| m/M : Modify the record            |\n");
		printf("\t| v/V : Save the list                |\n");
		printf("\t| e/E : exit			     |\n");
		printf("\t| t/T : sort the list		     |\n");
		printf("\t| l/L : Delete all the records       |\n");
		printf("\t| r/R : Reverse the list             |\n");
		printf("\t|____________________________________|\n");   
		printf("\n");
		printf("\tenter your choice: ");
		scanf(" %c",&op);

		switch(op)
		{
			case 'a': 
			case 'A': stud_add(&hptr);
				  break;
			case 'd': 
			case 'D': stud_del(&hptr);
				  break;
			case 's':
			case 'S': stud_show(hptr);
				  break;
			/*case 'm':
			case 'M': stud_modify();
				  break;*/
			case 'v':
			case 'V': stud_save(hptr);
				  break;
			case 'e': 
			case 'E': stud_exit(hptr);
				 break; 

			/*case 't':
			case 'T': stud_sort();
				  break;*/
			case 'l':
			case 'L': del_all(&hptr);
				  break;
			case 'r': 
			case 'R': rev_list(&hptr);
				  break;
			default:
				  printf("\tInvalid choice\n");
				  break;

		}
		printf("\tDo you still want to access(y/n): ");
		scanf(" %c",&dec);
	}
	while(dec=='y'||dec=='Y');
}
