#include<stdio.h>
#include<conio.h>
void main(){

    int i,f=1,n;
    clrscr();

    printf("enter the number to find the factorial\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
	 f=f*i;}
   printf( "the answer is = %d",f);
   getch();
   }
