#include<stdio.h>
main()
{
	float n,b,c;
	printf("Enter the electricity comsumed_\n");
	scanf("%f",&n);
	if(n<100)
	{
		b=n*1.75;
		printf("The elecrticity bill is %f",b);
	}
	else if(n<200)
	{
		b=n-100;
		c= b*2.50 + 175;
		printf("the electricity bill is %f",c);
	}
	else if(n<300)
	{
		b=n-200;
		c=b*4.70 + 425;
		printf("the electricity bill is %f",c);
	}
	else if(n>300)
	{
		b=n-300;
		c=b*5.20 + 895;
		printf("the electricity bill is %f",c);
	}
}
