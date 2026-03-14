#include "header.c"
/*void stud_modify(struct st **ptr, char op)
{

        char dec;
        int n;
        float f;
        char s[20];
        struct st *temp=*ptr;
        if(op=='0')
        {
                printf("\t|-------------------------------------------------|\n");
                printf("\t|   which record to search for modification       |\n");
                printf("\t|    r/R : to search a roll no                    |\n");
                printf("\t|    n/N : to search a name                       |\n");
                printf("\t|    m/M : marks based                            |\n");
                printf("\t|-------------------------------------------------|\n");
                printf("\t");
                scanf(" %c",&op);
        }

        if(op=='r'||op=='R')
        {
                printf("\t----------------------------\n");
                printf("\t   Enter the roll no: ");
                scanf("%d",&n);
                while(temp!=0)
                {
                        if(temp->roll==n)
                        {
                                printf("\t-----------------------------------\n");
                                printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
                                printf("\n");
                                printf("\t|----------------------------|\n");
                                printf("\t|    n/N change name         |\n");
                                printf("\t|    p/P change percentage   |\n");
                                printf("\t|----------------------------|\n\t");
                                scanf(" %c",&dec);
                                if(dec=='n'||dec=='N')
                                {
                                        printf("\t--------------------------------\n");
                                        printf("\t   Enter the new name: ");
                                        scanf(" %s", s);
                                        strcpy(temp->name, s);
                                        break;
                                }
                                else if(dec=='p'|| dec=='P')
                                {
                                        printf("\t------------------------\n");
                                        printf("\t   Enter new marks: ");
                                        scanf("%f",&f);
                                        temp->marks=f;
                                        break;
                                }
				else
                                {
                                        printf("\t---INVALID INPUT---\n");
                                        return;
                                }
                        }
                        temp=temp->next;
                }
        }

        else if(op=='n'||op=='N')
        {
                char cnt=0;
                printf("\t-----------------------------\n");
                printf("\t  Enter the name: ");
                scanf(" %s",s);
                while(temp!=0)
                {
                        if((strcmp(s,temp->name))==0)
                        {
                                cnt++;
                        }
                        temp=temp->next;
                }

                if(cnt==0)
                {
                        printf("\t Name not found\n");
                        return;
                }

                else if(cnt==1)
                {
                        temp=*ptr;
                        while(temp!=0)
                        {
                                if((strcmp(temp->name, s))==0)
                                {
                                        printf("\t-----------------------------------\n");
                                        printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
                                        printf("\n");
                                        printf("\t|----------------------------|\n");
                                        printf("\t|    n/N change name         |\n");
                                        printf("\t|    p/P change percentage   |\n");
                                        printf("\t|----------------------------|\n\t");
                                        scanf(" %c",&dec);

                                        if(dec=='n'||dec=='N')
                                        {
                                                printf("\t--------------------------------\n");
                                                printf("\t   Enter the new name: ");
                                                scanf(" %s", s);
                                                strcpy(temp->name, s);
                                                break;
                                        }
 }
                                        else if(dec=='p'|| dec=='P')
                                        {
                                                printf("\t------------------------\n");
                                                printf("\t   Enter new marks: ");
                                                scanf("%f",&f);
                                                temp->marks=f;
                                                break;
                                        }
                                }
                                temp=temp->next;
                        }
                }

                else if(cnt>1)
                {
                        printf("\t Multiple names found Enter the roll\n");
                        printf("\t-----------------------------------\n");
                        temp=*ptr;
                        while(temp!=0)
                        {
                                if((strcmp(temp->name, s))==0)
                                {
                                        printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
                                }
                                temp=temp->next;
                        }

                        stud_modify(ptr, 'r');
                }
                
        }

        else if(op=='m'||op=='M')
        {

                char cnt=0;
                printf("\t-----------------------------\n");
                printf("\t  Enter the percentage: ");
                scanf("%f",&f);
                while(temp!=0)
                {
                        if(temp->marks==f)
                        {
                                cnt++;
                        }
                        temp=temp->next;
                }

                if(cnt==0)
                {
                        printf("\t not found\n");
                        return;
                }
		else if(cnt==1)
                {
                        temp=*ptr;
                        while(temp!=0)
                        {
                                if(temp->marks==f)
                                {
                                        printf("\t-----------------------------------\n");
                                        printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
                                        printf("\n");
                                        printf("\t|----------------------------|\n");

                                        printf("\t|    n/N change name         |\n");
                                        printf("\t|    p/P change percentage   |\n");
                                        printf("\t|----------------------------|\n\t");
                                        scanf(" %c",&dec);

                                        if(dec=='n'||dec=='N')
                                        {
                                                printf("\t--------------------------------\n");
                                                printf("\t   Enter the new name: ");
                                                scanf(" %s", s);
                                                strcpy(temp->name, s);
                                                break;
                                        }
                                        else if(dec=='p'|| dec=='P')
                                        {
                                                printf("\t------------------------\n");
                                                printf("\t   Enter new marks: ");
                                                scanf("%f",&f);
                                                temp->marks=f;
                                                break;
                                        }
                                }
                                temp=temp->next;
                        }
                }

                else if(cnt>1)
                {
                        printf("\t Multiple students found!! Enter the roll\n");
                        printf("\t-----------------------------------\n");
                        temp=*ptr;
                        while(temp!=0)
                        {
                                if(temp->marks==f)
                                {
                                        printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
                                }
                                temp=temp->next;
                        }

                        stud_modify(ptr, 'r');
                }
	}
}*/

void stud_modify(struct st **ptr, char op)
{

	char dec;
	int n;
	float f;
	char s[20];
	struct st *temp=*ptr;
	if(op=='0')
	{
		printf("\t|-------------------------------------------------|\n");
		printf("\t|   which record to search for modification       |\n");
		printf("\t|    r/R : to search a roll no                    |\n");
		printf("\t|    n/N : to search a name                       |\n");
		printf("\t|    m/M : marks based                            |\n");
		printf("\t|-------------------------------------------------|\n");
		printf("\t");
		scanf(" %c",&op);
	}

	if(op=='r'||op=='R')
	{
		printf("\t----------------------------\n");
		printf("\t   Enter the roll no: ");
		scanf("%d",&n);
		while(temp!=0)
		{
			if(temp->roll==n)
			{
				printf("\t-----------------------------------\n");
				printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
				printf("\n");
				printf("\t|----------------------------|\n");
				printf("\t|    n/N change name         |\n");
				printf("\t|    p/P change percentage   |\n");
				printf("\t|----------------------------|\n\t");
				scanf(" %c",&dec);
				if(dec=='n'||dec=='N')
				{
					printf("\t--------------------------------\n");
					printf("\t   Enter the new name: ");
					scanf(" %s", s);
					strcpy(temp->name, s);
					break;
				}
				else if(dec=='p'|| dec=='P')
				{
					printf("\t------------------------\n");
					printf("\t   Enter new marks: ");
					scanf("%f",&f);
					temp->marks=f;
					break;
				}
				else
				{
					printf("\t---INVALID INPUT---\n");
					return;
				}
			}
			temp=temp->next;
		}
	}

	else if(op=='n'||op=='N')
	{
		char cnt=0;
		printf("\t-----------------------------\n");
		printf("\t  Enter the name: ");
		scanf(" %s",s);
		while(temp!=0)
		{
			if((strcmp(s,temp->name))==0)
			{
				cnt++;
			}
			temp=temp->next;
		}

		if(cnt==0)
		{
			printf("\t Name not found\n");
			return;
		}

		else if(cnt==1)
		{
			temp=*ptr;
			while(temp!=0)
			{
				if((strcmp(temp->name, s))==0)
				{
					printf("\t-----------------------------------\n");
					printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
					printf("\n");
					printf("\t|----------------------------|\n");
					printf("\t|    n/N change name         |\n");
					printf("\t|    p/P change percentage   |\n");
					printf("\t|----------------------------|\n\t");
					scanf(" %c",&dec);

					if(dec=='n'||dec=='N')
					{
						printf("\t--------------------------------\n");
						printf("\t   Enter the new name: ");
						scanf(" %s", s);
						strcpy(temp->name, s);
						break;
					}
					else if(dec=='p'|| dec=='P')
					{
						printf("\t------------------------\n");
						printf("\t   Enter new marks: ");
						scanf("%f",&f);
						temp->marks=f;
						break;
					}
				}
				temp=temp->next;
			}
		}

		else if(cnt>1)
		{
			printf("\t Multiple names found Enter the roll\n");
			printf("\t-----------------------------------\n");
			temp=*ptr;
			while(temp!=0)
			{
				if((strcmp(temp->name, s))==0)
				{
					printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
				}
				temp=temp->next;
			}

			stud_modify(ptr, 'r');
		}

	}

	else if(op=='m'||op=='M')
	{

		char cnt=0;
		printf("\t-----------------------------\n");
		printf("\t  Enter the percentage: ");
		scanf("%f",&f);
		while(temp!=0)
		{
			if(temp->marks==f)
			{
				cnt++;
			}
			temp=temp->next;
		}

		if(cnt==0)
		{
			printf("\t not found\n");
			return;
		}

		else if(cnt==1)
		{
			temp=*ptr;
			while(temp!=0)
			{
				if(temp->marks==f)
				{
					printf("\t-----------------------------------\n");
					printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
					printf("\n");
					printf("\t|----------------------------|\n");

					printf("\t|    n/N change name         |\n");
					printf("\t|    p/P change percentage   |\n");
					printf("\t|----------------------------|\n\t");
					scanf(" %c",&dec);

					if(dec=='n'||dec=='N')
					{
						printf("\t--------------------------------\n");
						printf("\t   Enter the new name: ");
						scanf(" %s", s);
						strcpy(temp->name, s);
						break;
					}
					else if(dec=='p'|| dec=='P')
					{
						printf("\t------------------------\n");
						printf("\t   Enter new marks: ");
						scanf("%f",&f);
						temp->marks=f;
						break;
					}
				}
				temp=temp->next;
			}
		}

		else if(cnt>1)
		{
			printf("\t Multiple students found!! Enter the roll\n");
			printf("\t-----------------------------------\n");
			temp=*ptr;
			while(temp!=0)
			{
				if(temp->marks==f)
				{
					printf("\t  %d %s %f\n",temp->roll, temp->name, temp->marks);
				}
				temp=temp->next;
			}

			stud_modify(ptr, 'r');
		}

	}
}
