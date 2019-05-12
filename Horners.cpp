#include<iostream>
using namespace std;


class polynomial
{
	int a[50],i=0,j,n,x;
	public:
		polynomial()
		{
			do
			{
				cout<<"Enter coefficient and exponent\n";
				cin>>a[i]>>a[i+1];
				i=i+2;
				cout<<"Do you want to continue? (1/0)  ";
				cin>>n;
			}
			while(n);
			j=i;
			cout<<"Enter the point at which poynomial must be evaluated\n";
			cin>>x;
		}
		
		void Horners(int sum,int k)
		{
			static int c=0;
			if(k<j)
			{
				sum=sum*x + a[k];
				c++;
				return Horners(sum,k+2);
			}
				cout<<"The value of polynomial at "<<x<<" is "<<sum<<"\n";
			    cout<<"The number of multiplications is "<<c<<"\n";
		}
	
};

int main()
{
	polynomial p;
	p.Horners(0,0);
}
