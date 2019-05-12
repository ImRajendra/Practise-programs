#include<stdio.h>
main()
{
	int a[20],n,i;
	printf("Enter the number of elements \n");
	scanf("%d",n);
	for(i=0;i<n;i++)
	scanf("%d",a[i]);
	bubblesort(a,n);
	printf("The sorted list of numbers \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}

bubblesort (int a[],int n)
{
	int i,j,temp;
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-1);j++)
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
