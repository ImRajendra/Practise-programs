#include<stdio.h>
main()
{
	float a,b,c,d,e;
	printf("Enter the distance between two cities in kilometers \n");
	scanf("%f",&a);
	b=a*1000;
	c=a*3280.84;
	d=a*39370.1;
	e=a*100000;
	printf("the distance in meters = %f \n",b);
	printf("the distance in foot = %f \n",c);
	printf("the distance in inches =%f \n",d);
	printf("the distance in centimeters = %f \n",e);
}
