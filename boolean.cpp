#include<iostream>
using namespace std;

class boolean
{
	int n,a[30];
	public:
		void setboolean()
		{
			cout<<"Enter the number of boolean variables\nNote:Max varialbles is 30\n";
			cin>>n;
		}
		
	    void possibility()
		{
			int i;
			int sum=1;
			for(int i=1;i<=n;i++)
			 sum=sum*2;
			for(i=0;i<n;i++)
			 a[i]=0;
			cout<<"All the possibilities are as follows\n";
			for(i=0;i<sum;i++)
			binary(i);
			
		}
		
        
        void binary(int dec)
        {
        	int rem,i,j,count;
		for(i=0;dec!=0;i++)
        {
            rem=dec%2;
            a[i]=rem;
            dec=dec/2;
            count++;
        }
        for(j=n-1;j>=0;j--)
        {
           if(a[j]==1)
            cout<<"True  ";
           else
            cout<<"False  ";
        }
        cout<<"\n";
       }
 
};

int main()
{   
    int n;
	boolean a;
	cout<<"Enter 1 to start\n";
	cin>>n;
	while(n)
	{
		a.setboolean();
		a.possibility();
		cout<<"Enter 1 to continue and 0 to exit\n";
		cin>>n;
	}
	
	
}

