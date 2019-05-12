#include<stdio.h>
#include<conio.h>
main()
{
	int n,sum,sub,mul,div,a,b;
	printf("Welcome\n");
	printf("Enter the first number__\n");
	scanf("%d",&a);
	printf("Enter the second number__\n");
	scanf("%d",&b);
	printf("what operation do you want to perform??\n");
	printf("Enter 1 for addition\n");
	printf("Enter 2 for subtraction \n");
	printf("Enter 3 for multiplication \n");
	printf("Enter 4 for division \n");
	scanf("%d",&n);
	
	switch(n)
    {
	  
	    case 1:
		sum=a+b;
		printf("Addition is choosen \n");
		printf(" %d + %d = %d \n",a,b,sum);
		break;
		
		case 2:
		sub=a-b;
		printf("subtraction is choosen \n");
		printf(" %d - %d =  %d \n",a,b,sub);
		break;
		
		case 3:
		mul=a*b;
		printf("Multiplication is choosen \n");
		printf(" %d X %d = %d  \n",a,b,mul);
		break;
		
		case 4:
		div=a/b;
		printf("Division is choosen \n");
		printf(" %d / %d = %d  \n",a,b,div);
		break;   	
	
	
	
	default:
		printf("the option choosen is unavailable \n");
}

	getch();
}
