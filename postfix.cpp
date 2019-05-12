#include<iostream>
#include<stdlib.h>
using namespace std;
	int top=-1;
	char skt[20];
		
		void push(char x)
		{
				skt[++top]=x;
				
			
			
		}
		
		int pop()
		{
			
				return skt[top--];
		}
	
		
		bool empty()
		{
			if(top==-1)
			return true;
			else
			return false;
		}
int pr(char ch)
{
	switch(ch)
	{
		case'#':return 0;
		        
		case'+':
		case'-': return 2;
		
		case')':return 1;
		
		case'*':
		case'/':return 3;
			
	}
}



int main()
{
	char infix[20],postfix[20],ch,e,s[50];
	int i=0;
	int k=0;
	cout<<"Enter the infix expresion\n";
	cin>>infix;
	push('#');
	while((ch=infix[i++])!='\0')
	{
	 if(ch=='(')
	 push(ch)	;
	 if(isdigit(ch))
	 postfix[k++]=ch;
	 else 
	 if(ch==')')
	 {
	 while(s[top]!='(')
	 postfix[k++]=pop();
	 e=pop();
    }
    else
    {
    	while(pr(s[top])>pr(ch))
    	postfix[k++]=pop();
    	push(ch);
		}
	}
    while(s[top]!='#')
	postfix[k++]=pop();		    
    postfix[k]='\0';
    cout<<"given infix\t"
    while(*s)
    {
    	cout<<
	}
    cout<<"postfix expresion"<<postfix<<"\n";
}


