
#include<stdio.h>
main()
{
	int a[30],n,m,i,por;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the element to be searched\n");
	scanf("%d",&m);
	por=linearsearch(a,n,m);
	if(por==-1)
	printf("the element doesnt exist\n");
	else
	printf("The element exist at %d",por);
}

linearsearch (int a[],int n,int m)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==m)
		return i;
	}
  	return -1;
}
