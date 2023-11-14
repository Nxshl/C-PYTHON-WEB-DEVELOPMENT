#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,b[10],c[20],m,n,o;
	clrscr();
	printf("Enter the number of elements in the first array:\n");
	scanf("%d",&m);
	printf("Enter the elements of the first array:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number of the second array:\n");
	scanf("%d",&n);
	printf("Enter the elements of the second array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	o = m + n;
	for(i=0;i<m;i++)
	{
		c[i] = a[i];
	}
	for(i=0;i<n;i++)
	{
		c[m+i] = b[i];
	}
	printf("The merged array is \n");
	for(i=0;i<o;i++)
	{
		printf("%d\n",c[i]);
	}
	getch();
	return 0;
}
