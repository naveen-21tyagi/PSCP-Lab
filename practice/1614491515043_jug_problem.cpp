#include<iostream>
using namespace std;

int main()
{
	int n,amt;
	cout<<"Enter the value of n: ";
	cin>>n;
	
	int A = 2*n+1;
	int B = 2*n+3;
	int C = 4*n+4;
	
	cout<<"Small jug  = "<<A<<endl;
	cout<<"Medium jug = "<<B<<endl;
	cout<<"Big jug    = "<<C<<endl;
	
	cout<<"Enter the value b/w "<<"1"<<" & "<<4*n+4<<" : ";
	cin>>amt;
	int a = 0, b = 0,  c = 4*n + 4;;
	cout<<"\t"<<A<<" l.Jug\t\t"<<B<<" l.Jug\t\t"<<C<<" l.Jug\t\t"<<endl;
	cout<<"\t  "<<a<<"\t\t  "<<b<<"\t\t  "<<C<<endl;
	while(c!=amt)
	{
		c = c - A;
		a = a + A;
		cout<<"\t  "<<a<<"\t\t  "<<b<<"\t\t  "<<c<<endl;
		if(c==amt) break;
		
		b = a + b;
		if(b>(2*n+3))
		{
			a = b-(2*n+3);
			b = 2*n+3;
		}
		else
		a = 0;
		cout<<"\t  "<<a<<"\t\t  "<<b<<"\t\t  "<<c<<endl;
		
		
		
		if(b==(2*n+3))
		{
			c = c + b;
			b = 0;
			cout<<"\t  "<<a<<"\t\t  "<<b<<"\t\t  "<<c<<endl;
			if(c==amt)
			break;
			if(a>0)
			{
				b = a+b;
				a = 0;
			}
			cout<<"\t  "<<a<<"\t\t  "<<b<<"\t\t  "<<c<<endl;
		}
	}
		
}
			
	

