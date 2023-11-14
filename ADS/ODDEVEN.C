#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int num;
printf("enter an integer :");
scanf("%d",&num);

if(num%2==0)
printf("%d is even",num);
else
printf("%d is odd\n",num);
getch();
}