#include<stdio.h>
#include<conio.h>
int gcd(int x,int y)
{

int min,i;
if(x>y)
min=y;
else
min=x;
for(i=min;i>=1;i--);
{
    	if(x%min==0 && y%min==0)
        {
		
        	return min;
    
    }
}
}

main()
{
	int a,b,c,x,y;
	printf("enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	x=gcd(a,b);
	y=gcd(c,x);
	printf("GCD of three numbers is %d",y);
	getch();
}
