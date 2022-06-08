#include<stdio.h>
#include<stdlib.h>
#define n 5

int top=-1;
int stack[n];
int isfull();
int isempty();


void push(int val)
{
	if(isfull())
	{
		printf("\nOverflow");
	}
	else
	{
		top++;
		stack[top]=val;
		printf("\n%d Pushed",stack[top]);
	}
}
void pop()
{
	if(isempty())
	{
		printf("\n Underflow");
	}
	else
	{
		printf("\n%d popped",stack[top]);
		stack[top]=-1;
		top--;
	}
}

int isfull()
{
	if(top==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void display()
{
	int i,x;
	x=top;
	for(i=x;i>=0;i--)
	{
	  printf("\n No: %d\n",stack[i]);
	}
}

void findtop()
{
	printf("\ntop position=%d\n",top);
	printf("\ntop value=%d\n",stack[top]);
}

void main()
{
	while(1)
	{	
	  int ch,entry;
		printf("\n\n1)Push\n2)Pop\n3)Display\n4)Find top\n5)Exit\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("Enter data");
				scanf("%d",&entry);
				push(entry);
				break;
			}
			case 2:
			{
			  pop();
				break; 
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				findtop();
				break;
			}
			
			case 5:
			{
				printf("Bye \n");
				exit(0);
			}
			
		}
	}
}
			

