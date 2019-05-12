#include<stdio.h>
main()
{
	int A[10][10],B[10][10],C[10][10],r1,r2,c1,c2;
	printf("Enter number of rows and columns of matrix A\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter number of rows and columns of matrix B\n");
	scanf("%d%d",&r2,&c2);
	if(c1!=r1)
	{
	printf("the multiplication is not possible\n");
	}
	else
	{
	printf("Enter matrix A\n");
	readmatrix(A,r1,c1);
	printf("Enter matrix B\n");
	readmatrix(B,r2,c2);
	mulmatrix(A,B,C,r1,c1,c2);
	printf("Matrix A is \n");
	printmatrix(A,r1,c1);
	printf("Matrix B is\n");
	printmatrix(B,r2,c2);
	printf("The resultant matrix of A+B is\n");
	printmatrix(C,r2,c1);
	}
}

readmatrix (int a[][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
}

 printmatrix (int a[][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
		printf("%d",&a[i][j]);
		printf("\n");
	
}

mulmatrix(int x[][10],int y[][10],int z[][10],int r,int c,int p)
{
	int i,j,k;
	for(i=0;i<r;i++)
	{
		for(j=0;j<p;j++)
		{
			for(k=0;k<c;k++)
			z[i][j]=z[i][j]+x[i][k]*y[k][j];
		}
	}
}

