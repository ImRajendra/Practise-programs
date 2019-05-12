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
	por=binarysearch(a,n,m);
	if(por==-1)
	printf("the element doesnt exist\n");
	else
	printf("The element exist at %d",por);
}

binarysearch (int a[],int n,int m)
{
	int last,middle,first;
	first=0;
	last=n-1;
	while(last>=first)
	{
		middle=(first+last)/2;
		if(m>a[middle])
		first=middle+1;
		else if(m<a[middle])
		last=middle-1;
		else if(m==a[middle])
		return middle;
	}
	return -1;
}
