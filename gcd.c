#include<stdio.h>
main()
{
	int a,b,c,g;
	printf("Enter two numbers\n");
	scanf("%d%d",a,b);
	if(a<b)
	c=a;
	if(b<a)
	c=b;
	g=gcd(a,b,c);
	printf("GCD of given two numbers is %d",g);
	getch();
}

gcd (int a,int b,int c)
{
	if(a%c==0&&b%c==0)
	return c;
	else 
	return gcd(a,b,c-1);
}
