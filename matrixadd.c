#include<stdio.h>
main()
{
	int A[10][10],B[10][10],C[10][10],r,c;
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&r,&c);
	printf("Enter matrix A\n");
	readmatrix(A,r,c);
	printf("Enter matrix B\n");
	readmatrix(B,r,c);
	addmatrix(A,B,C,r,c);
	printf("Matrix A is \n");
	printmatrix(A,r,c);
	printf("Matrix B is\n");
	printmatrix(B,r,c);
	printf("The resultant matrix of A+B is\n");
	printmatrix(C,r,c);
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


addmatrix (int a[][10],int b[][10],int C[][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	
		for(j=0;j<c;j++)
		C[i][j]=a[i][j]+b[i][j];
	
}
