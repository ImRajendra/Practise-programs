#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d;
	float r1,r2;
	printf("any quadratic equation is of form a(xx)+bx+c\n");
	printf("Enter a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-(4*a*c);
	if(d<0)
	{
		printf("The roots are imaginary\n");
	}
   else if(d==0)
   {
   	printf("The roots are real and equal\n");
   	r1=r2=-b/(2*a);
   	printf("The repeated root is  %d",r1);
   }
   else
   {
   	printf("the roots are real and distinct\n");
   	r1=(-b+sqrt(d))/(2*a);
   	r2=(-b-sqrt(d))/(2*a);
    printf("The roots are\n root1=%f \n root2=%f",r1,r2);
   }
}
