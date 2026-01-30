#include<stdio.h>

#define max 3
int top=0;
int arr[max];
void push(void);
void pop(void);
void display(void);

int main()
{
	int op;
	while(1)
	{
		printf("Enter 1)push 2)pop 3)display 4)exit: ");
		scanf("%d",&op);

		switch(op)
		{
			case 1 : push(); break;
			case 2 : pop(); break;
			case 3 : display(); break;
			default: return 0;
		}
	}
}

void push(void)
{
	if(top==max)
	{
		printf("Stack is overflow\n");
		return;
	}

	int n;
	printf("Enter the element to push: ");
	scanf("%d",&n);
	arr[top]=n;
	top++;
}

void pop(void)
{
	if(top==0)
	{
		printf("Stack is underflow\n");
		return;
	}

	top--;
	arr[top]=0;
}

void display(void)
{
	for(int i=0; i<top; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

