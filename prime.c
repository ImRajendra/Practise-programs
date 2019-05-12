//program for prime number
#include<stdio.h>
main()
{
	int i,n,fact;
	printf("Enter a number___\n");
	scanf("%d",&n);
	for(i=2;i<n;i++);
	fact=n%i;
	if(fact==0)
	{
		printf(" The given number is prime \n");
	}
	else
	{ 
	 printf("the number is not prime \n");
   }

}
