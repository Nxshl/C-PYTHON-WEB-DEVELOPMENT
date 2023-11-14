#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,l,m,n,p,q;
	clrscr();
	printf("Enter the number of rows and columns in first matrix:\n");
	scanf("%d",&m);
	scanf("%d",&n);
	printf("Enter the number of rows and columns in the second matrix:\n");
	scanf("%d",&p);
	scanf("%d",&q);
	if(n==p)
	{
	printf("Enter the elements of the first matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the second matrix:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			c[i][j]=0;
			for(k=0;k<p;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("The multiplied array is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	}
	else
	{
		printf("\nMatrices cannot be multiplied!!!\n");
	}
	getch();
	return 0;
}
