#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[10][10],b[10][10],mul[10][10];
	int i,j,k,r,c;
	printf("enter no of rows & columns for matrix:");
	scanf("%d %d",&r,&c);
	printf("enter elements for matrix A:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements for matrix B:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("the multiplication of matrix is:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<r;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",mul[i][j]);
		}
	}
}
