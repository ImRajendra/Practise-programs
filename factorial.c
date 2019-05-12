#include<stdio.h>
main()
{
	int a,g;
	printf("Enter a number\n");
	scanf("%d",&a);
	g=fact(a);
	printf("The factorial of given number is %d",g);
}
 
fact (int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
	
}
