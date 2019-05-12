#include<stdio.h>
main()
{
	int a[30],n,i;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	selectionsort(a,n);
	printf("The sorted list is\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}

selectionsort (int a[],int n)
{
	int i,j,min,temp;
	for(i=0;i<(n-1);i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
		}
}
