//program to find out permutations and combinations
#include<stdio.h>
int fact(int n)
{
 if(n==0)
 return 1;
 else
 return n*fact(n-1);	
}
	
main()
{
	int n,r,p,c;
	printf("Enter the total number of entities available (n) \n");
	scanf("%d",&n);
	printf("Enter No. of arrangements or selections (r) \n");
	scanf("%d",&r);
	p=fact(n)/fact(n-r);
	c=p/fact(r);
	printf("total No. of permutations are %d\n",p);
	printf("Total No. of combinations are %d\n",c);
	getch();
}

	

