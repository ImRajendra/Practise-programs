#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g;
	printf("Maximum marks obtained in any subject is 100 \n");
	printf("Enter the marks obtained in subject 1 \n");
	scanf("%d",&a);
	printf("Enter the marks obtained in subject 2 \n");
	scanf("%d",&b);
	printf("Enter the marks obtained in subject 3 \n");
	scanf("%d",&c);
	printf("Enter the marks obtained in subject 4 \n");
	scanf("%d",&d);
	printf("Enter the marks obtained in subject 5 \n");
	scanf("%d",&e);
    if(a<100,b<100,c<100,d<100,e<100)
    {
	f=a+b+c+d+e;
	g=f/5;
	printf("agregate marks obtained are %d out of 500 \n",f);
	printf("percentage = %d",g);
    }
    else
    printf("marks entred are incorrect\n");
}
