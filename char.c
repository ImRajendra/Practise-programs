//program for all caluclations
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a,b,n,m,o,sub,mul,sum,div,c,d,e,area;
	float s;
	char name[50];
	printf("May I know ur good name?? \n");
	scanf("%s",name);
	printf("Hi %s \n",&name);
	printf("What scientifical operation do you want to perform?? \n");
	printf("Enter 1 for algebraic operations  \n");
	printf("Enter 2 for areas \n");
	printf("Enter 3 for conversions \n");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("You have choosen algebraic operations \n");
			printf("Enter your first number__ \n");
			scanf("%d",&a);
			printf("Enter your second numer__ \n");
			scanf("%d",&b);
			printf("what algebraic operation do you want to perform??\n");
			printf("Enter 1 for addition\n");
        	printf("Enter 2 for subtraction \n");
        	printf("Enter 3 for multiplication \n");
	        printf("Enter 4 for division \n");
	        scanf("%d",&m);
	        switch(m)
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
			break;
			
		case 2:
			printf("You have choosen areas \n");
			printf("Enter 1 for area of triangle \n");
        	printf("Enter 2 for area of square \n");
        	printf("Enter 3 for area of rectangle \n");
        	printf("Enter 4 area of circle \n");
	        scanf("%d",&o);
	        switch(o)
	        {
	        	case 1:
	        		printf("you have choosen area of triangle \n");
	        		printf("Enter length of first side \n");
	        		scanf("%d",&c);
	        		printf("Enter length of second side \n");
	        		scanf("%d",&d);
	        		printf("Enter length of third side  \n");
	        		scanf("%d",&e);
	        		s=(c+d+e)*0.5;
	        		area=s*(s-a)*(s-b)*(s-c);
                    printf("area of given triangle=%f \n",sqrt(area));	
					break;
					
				case 2:
				   printf("You have choosen area of square \n");  
				   printf("Enter the side of square__\n");
				   scanf("%d",&a);
				   b=a*a;
				   printf("area of square= %d \n",b);
				   break;
				   
				case 3:
				   printf("You have choosen area of rectangle \n");
				   printf("Enter length of rectangle \n");
				   scanf("%d",&a);
				   printf("enter breadth of rectancle \n");
				   scanf("%d",&b);
				   c=a*b;
				   printf("area of given rectangle = %d",c);
				   break;
				   
				case 4:
					printf("you have choosen area of circle \n");
					printf("Enter radius of circle \n");
					scanf("%d",&a);
					b=3.14*a*a;
					printf(" Required area of circle = %d",b);
					break;
					
					default:
					printf("the option entered is unavailable \n");
			}
			break;
			
		case 3;
			printf("You have choosen conversions \n");
			printf("Enter 1 for length conversions \n");
			printf("Enter 2 for weight conversions \n");
			printf("Enter 3 for temperature conversions \n");
		    scanf("%d",&m);
		    switch(m)
		    {
		    	case 1:
		    		printf("You have choosen length conversions \n");
		    		printf("Enter 1 for conversion of centimeters to inches \n");
					printf("Enter 2 for conversions of inches to centimeters \n");
					printf("Enter 3 for conversions of meters to yards \n");
					printf("Enter 4 for conversion of kilometers to miles \n");
					printf("Enter 5 for conversion of miles to kilometers \n");
					scanf("%d",&o);
					switch(o)
					{
						
					}
					
		    		
			}
					
			default:
			printf("option entered is unavailable");		
	        		
	        		
			
			
			
	}
	
	getch();
}
