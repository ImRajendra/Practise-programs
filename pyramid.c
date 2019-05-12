#include<stdio.h>
main()
{
	int n,x=1,c;
	printf("enter a limit\n");
	scanf("%d",&n);
	printf("\n\n");
	for(x=1;x<=n;x++)
	{
		for(c=1;c<x;c++)
		printf("%d",c);
		printf("\n");
	}
	
}
