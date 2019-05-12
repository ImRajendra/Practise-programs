#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter percentage of marks obtained out of 100\n");
	scanf("%d",&a);
	if(a<=100)
	{
		if(a<50)
		printf(" The grade obtained is D\n");
		else if(a<65)
		printf(" The grade obtained is C\n");
		else if(a<75)
		printf(" The grade obtained is B\n");
		else
		printf(" The grade obtained is A\n");
	}
	else
	printf("the precentage entered is incorrect");
}
