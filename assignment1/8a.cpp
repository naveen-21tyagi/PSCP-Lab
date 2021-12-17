#include<iostream>
using namespace std;
int main(){
	float a,b,c,m,q,r,Z;         //declaration of variables


	cout<<"Enter a value for a: ";
	cin>>a;                     //take input and store in a

	cout<<"Enter a value for b: ";
	cin>>b;                     //take input and store in b

	cout<<"Enter a value for c: ";
	cin>>c;                     //take input and store in c

	cout<<"Enter a value for m: ";
	cin>>m;	                    //take input and store in m

	cout<<"Enter a value for q: ";
	cin>>q;                     //take input and store in q

	cout<<"Enter a value for r: ";
	cin>>r;                    //take input and store in r



    Z=(8.8*(a+b)*2/c-0.5+2*a/(q+r))/((a+b)*(1/m));
	cout<<Z;                 //print answer

	return 0;
}
