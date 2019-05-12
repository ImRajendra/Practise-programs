#include<iostream>
using namespace std;

int Ackermann(int m,int n)
{
	if(m==0)
	{
		return n+1;
	}
	else if(n==0)
	{
		return Ackermann(m-1,1);
	}
	else
	{
		return Ackermann(m-1,Ackermann(m,n-1));
	}
	
}

int main()
{
	int a,c,b,n=1;
	while(n)
	{
		cout<<"Enter the m,n in Ackermann's function\n";
		cin>>a>>b;
		c=Ackermann(a,b);
		cout<<"The answer is "<<c<<"\n";
		cout<<"Enter 0 to exit :\t";
		cin>>n;
	}
}
