#include<stdio.h>
#include<stdarg.h>
int my_printf(char *, ...);
void print(char *);
int main()
{
	int a = 8;
	float f = 22.7;
	char ch = 'A';
	char s[20] = "Embedded systems";
	
	my_printf("count = %d\n",my_printf("Hello world\n"));
	my_printf("count = %d\n",my_printf("a = %d\n",a));	
	my_printf("count = %d\n",my_printf("f = %f\n",f));
	my_printf("count = %d\n",my_printf("ch = %c\n",ch));
	my_printf("count = %d\n",my_printf("s = %s\n",s));
	my_printf("a = %d, f = %f, ch = %c, s = %s\n",a,f,ch,s);
}

int my_printf(char * p, ...)
{
	 int count = 0;
	int a, i;
	float f;
	char ch, s[20];
	//if (p[0]!='%') //&& !(p[0]>=0 && p[0]<=9))
				count=0;
	va_list pa;
	va_start(pa, p);
	for(i=0; p[i]; i++)
	{
				
		if(p[i] == '%')
		{
			i++;
			if(p[i] == 'd')
			{
				a = va_arg(pa, int);
				sprintf(s,"%d", a);
				count+=my_printf(s);
			}

			else if(p[i] == 'c')
			{
				ch = va_arg(pa, int);
				putchar(ch);
				count++;
			}

			else if(p[i] == 'f')
			{
				f = va_arg(pa, double);
				sprintf(s, "%f", f);
			       	count+=my_printf(s);
					
			}

			else if(p[i] == 's')
			{
				char *cp = va_arg(pa, char *);
				count+=my_printf(cp);
			}

		}
		else 
		{
			putchar(p[i]);
			count++;
		}
	}
	return count;

}


/*
void print(char *p)
{
	int i;
	for(i=0; p[i]; i++)
	putchar(p[i]);
	count++;
}*/
