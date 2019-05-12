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
	por=binarysearch(a,n,m,0,n-1);
	if(por==-1)
	printf("the element doesnt exist\n");
	else
	printf("The element exist at %d",por);
}

binarysearch (int a[],int n,int m,int first,int last)
{
	int middle;
	if(last>=first)
	{
		middle=(first+last)/2;
		if(m=a[middle])
        return middle;
        else if(m<a[middle])
        return binarysearch(a,n,m,first,middle-1);
        else if(m>a[middle])
        return binarysearch(a,n,m,middle+1,last);
	}
	return -1;
	
}
