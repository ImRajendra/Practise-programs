#include<iostream>
using namespace std;

int main()
{
	int n,m,a[30],i;
	cout<<"Enter number of inputs and number of outputs\n";
	cin>>n>>m;
	if(n<m)
	cout<<"for every input there is distinct output\n";
	else
	{
		for(i=0;i<n;i++)
		a[i]=i+1;
		cout<<"Inputs having same outputs\n";
		for(i=0;i+m<n;i++)
		cout<<a[i]<<"  "<<a[m+i]<<"\n";
	}
	
}
