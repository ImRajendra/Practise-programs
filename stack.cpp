#include<iostream>
#include<stdlib.h>
using namespace std;

class stack
{
	int top,skt[10];
	public:
		stack()
		{
			top=-1;
		}
		
		void push(int x)
		{
			if(top<=9)
			{
				skt[++top]=x;
				cout<<"inserted "<<x<<"\n";
			}
			else
			{
				cout<<"stack overflow\n";
			}
			
			
		}
		
		void pop()
		{
			if(top==-1)
			{
				cout<<"Stack underflow\n";
				return;
			}
			cout<<"Deleted"<<skt[top--]<<"\n";
		}
		
		void display()
		{
			if(top==-1)
			{
				cout<<"Stack underflow\n";
				return;
			}
			for(int i=top;i>=0;i--)
			{
				cout<<skt[i]<<"  ";
			}
			cout<<"\n";
		}
};

int main()
{
	int n,ch;
	stack a;
	while(1)
	{
	cout<<"Enter the choice\n"<<"1.Push\t"<<"2.Pop\t"<<"3.display\t"<<"4.exit\n";
	cin>>n;
	switch(n)
	{
		case 1: 
		cout<<"Enter the value\n";
	    cin>>ch;
	    a.push(ch);
	    break;
	    
	    case 2:
	    	a.pop();
	    	break;
	    case 3:
	    	a.display();
	    	break;
	    case 4:
	    	exit(0);
	    	break;
	    	
	   default:
	   	cout<<"Enter a valid option\n";
	   	
	}
}
}
