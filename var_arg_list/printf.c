#include<stdio.h>
#include<stdarg.h>
int my_printf(char *, ...);
int main()
{
	int a = 10;
	float f = 22.7;
	char ch = 'A';
	char s[50] = "Embedded systems chennai";
	my_printf("Hello world\n");
	my_printf("count =%d\n",my_printf("a = %d\n",a));
	my_printf("count = %d\n",my_printf("f = %f\n",f));
	my_printf("count =%d\n",my_printf("ch = %c\n",ch));
	my_printf("count = %d\n",my_printf("s = %s\n",s));
}

int my_printf(char *s, ...)
{
	int i;
	int count = 0;
	va_list ap;
	char st[50];
	va_start(ap, s);
	for(i=0; s[i]; i++)
	{
		if(s[i] == '%')
		{
			i++;
			if(s[i] == 'd')
			{
				int a = va_arg(ap, int);
				sprintf(st, "%d", a);
				count+= my_printf(st);
			}

			if(s[i] == 'c')
			{
				char a = va_arg(ap, int);
				putchar(a);
				count++;
			}

			if(s[i] == 'f')
			{
				float a = va_arg(ap, double);
				sprintf(st, "%lf", a);
				count+=my_printf(st);
			}

			if(s[i] == 's')
			{
				char *a = va_arg(ap, char *);
				count+=my_printf(a);
			}

		}

		else 
		{
			putchar(s[i]);
			count++;
		}
	}
	return count;
}
