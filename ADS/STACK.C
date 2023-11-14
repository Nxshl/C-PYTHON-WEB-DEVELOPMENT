#include<stdio.h>
#include<conio.h>
int stack[8],top=-1,maxsize=8;
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
int isfull()
{
	if(top==maxsize)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int pop()
{
	int data;
	if(!isempty())
	{
		data=stack[top];
		top=top-1;
		return data;
	}
	else
	{
		printf("Stack is empty!!!\n");
	}
}
int push(int data)
{
	if(!isfull())
	{
		top=top+1;
		stack[top]=data;
	}
	else
	{
		printf("Stack is full!!!\n");
	}
}
int main()
{
	int a,i;
	char n;
	clrscr();
	printf("Enter the stack elements:\n");
	for(i=0;i<8;i++)
	{
		scanf("%d",&a);
		push(a);
	}
	redo:
	printf("Pop an element?(Y/N)\n");
	scanf("%s",&n);
	if(n=='Y' | n=='y')
	{
		pop();
		goto redo;
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("%d\t",stack[i]);
		}
	}
	getch();
	return 0;
}
