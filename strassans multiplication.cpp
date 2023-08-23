#include<stdio.h>
#include<stdlib.h>
void add(int n,int A[][n],int B[][n],int C[][n])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
}
void subtract(int n,int A[][n],int B[][n],int C[][n])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			C[i][j]=A[i][j]-B[i][j];
		}
	}
}
void stressans_multiplication(int n,int A[][n],int B[][n],int C[][n])
{
	if(n<=2)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				C[i][j]=0;
				for(int k=0;k<n;k++)
				{
					C[i][j]+=A[i][k]*B[k][j];
				}
			}
		}
	}
	return;
}
int size=n/2;
int A11[][size],A12[][size],A21[][size],A22[][size];
int B11[][size],B12[][size],B21[][size],B22[][size];
int p1[][size], p2[][size], p3[][size], p4[][size], p5[][size], p6[][size], p7[][size];
// TO divide matrix to submatrix
for(int i=0;i<size;i++)
{
	for(j=0;j<n;j++)
	{
		A11[i][j]=A11[i][j];
		A12[i][j]=A12[i][j+size];
		A21[i][j]=A21[i+size][j];
		A22[i][j]=A22[i+size][j+size];
		
		B11[i][j]=B11[i][j];
		B12[i][j]=B12[i][j+size];
		B21[i][j]=B21[i+size][j];
		B22[i][j]=B22[i+size][j+size];
	}
	subtract(size,B12,B22,p1);
    stressans_multiplication(size,A11,p1,C11);

    add(size,A11,A12,p1);
    stressans_multiplication(size,p1,B22,C12);

    add(size,A21,A22,p1);
    stressans_multiplication(size,p1,B11,c21);

    subtract(size,B21,B11,p1);
    stressans_multiplication(size,A22,p1,C22);

    add(size,C11,C12,C);
    add(size,C,C21,C);
    subtract(size,C,C22,C);
    add(size,C,C11,C);
}
main()
{
	int n,A[][n],B[][n],C[][n];
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter elements for matrix A:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",A[i][j]);
		}
	}
	printf("enter elements for matrix B:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	 stressans_multiplication(n,A,B,C);
	 printf("matrix multiplication is:");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("%d\t",C[i][j]);
		 }
		 printf("\n");
	 }
}
