#include<stdio.h>
main()
{
	int a[20],i,n,min;
	printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=0;i<n;i++)
    {
    	if(a[i]<min)
    	min=a[i];
	}
printf("The minimum value in the given set of numbers is %d",min);
}

