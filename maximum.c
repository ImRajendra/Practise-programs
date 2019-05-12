#include<stdio.h>
main()
{
	int a[20],i,n,max;
	printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<n;i++)
    {
    	if(a[i]>max)
    	max=a[i];
	}
printf("The maximum value in the given set of numbers is %d",max);
}

