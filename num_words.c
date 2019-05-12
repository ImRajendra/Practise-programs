#include<stdio.h>
#include<conio.h>
main()
{
	int n,a,k,b,l,c,p;
	printf("Enter a number less than 1000 \n");
	scanf("%d",n);
	if(n<1000)
	{
	k=n%100;
	if(k=!0)
	{	
	a=n/100;
	switch(a)
	{
		case 0:
		printf("");
		break;
		
		case 1:
		printf("One hundred and");
		break;
		
		case 2:
		printf("two hundred and");
		break;
		
		case 3:
		printf("three hundred and");
		break;
		
		case 4:
		printf("four hundred and");
		break;
		
		case 5:
		printf("five hundred and");
		break;
		
		case 6:
		printf("six hundred and");
		break;
		
		case 7:
		printf("seven hundred and");
		break;
		
		case 8:
		printf("eight hundred and");
		break;
		
		case 9:
		printf("nine hundred and");
		break;
		
   }
	}
	else
	{
      a=n/100;
	switch(a)
	{
		case 0:
		printf("");
		break;
		
		case 1:
		printf("One hundred");
		break;
		
		case 2:
		printf("two hundred");
		break;
		
		case 3:
		printf("three hundred");
		break;
		
		case 4:
		printf("four hundred");
		break;
		
		case 5:
		printf("five hundred");
		break;
		
		case 6:
		printf("six hundred");
		break;
		
		case 7:
		printf("seven hundred");
		break;
		
		case 8:
		printf("eight hundred");
		break;
		
		case 9:
		printf("nine hundred");
		break;
		
   }		
	}	
	  
	  l=n%100;
	  b=l/10;
	  if(b==1)
	  {
	  	p=l%10;
	  	switch(p)
	  	{
	  	case 0:
	  	printf("");
	  	break;
	  	
	  	case 1:
	  	printf(" eleven");
		break;
        
		case 2:
	  	printf(" twelve");
		break;  		
		
		case 3:
	  	printf(" thirteen");
		break;
		
		case 4:
	  	printf(" fourteen");
		break;
		
		case 5:
	  	printf(" fifteen");
		break;
		
		case 6:
		printf(" sixteen");
		break;
		
		case 7:
	  	printf(" seventeen");
		break;
		
		case 8:
	  	printf(" eighteen");
		break;
		
		case 9:
	  	printf(" nineteen");
		break;
		
		  }
	  
			
	  	
}
    else
	  switch(b)
	  {
	  	case 0:
	  	printf("");
	  	break;
	  	
	  	case 2:
	  	printf(" twenty");
	  	break;
	  	
	  	case 3:
	  	printf(" thirty");
	  	break;
	  	
	  	case 4:
	  	printf(" forty");
	  	break;
	  	
	  	case 5:
	  	printf(" fifty");
	  	break;
	  	
	  	case 6:
	  	printf(" sixty");
	  	break;
	  	
	  	case 7:
	  	printf(" seventy");
	  	break;
	  	
	  	case 8:
	  	printf(" eighty");
	  	break;
	  	
	  	case 9:
	  	printf(" ninety");
	  	break;
		}
		 
		c=l%10;
		if(c=!0)
		{
		switch(c)
		{
	    	case 0:
	  	    printf("");
	  	    break;
	  	    
			case 1:
			printf(" one");
			break;
			
			case 2:
			printf(" two");
			break;
			
		    case 3:
			printf(" three");
			break;
			
			case 4:
			printf(" four");
			break;
			
			case 5:
			printf(" five");
			break;
			
			case 6:
			printf(" six");
			break;
			
			case 7:
			printf(" seven");
			break;
			
			case 8:
			printf(" eight");
			break;
			
			case 9:
			printf(" nine");
			break;
			
		 }
	}
	  else
	  printf("");
	}
	 
	 else
	 printf("The number you have entered is beyond reach of program\n");
	 getch();
	
}
