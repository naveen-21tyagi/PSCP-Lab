#include<iostream>
using namespace std;
int main(){
	float c,d,v,g,R;         //declaration of variables
	
	
	cout<<"Enter a value for c: ";
	cin>>c;                     //take input and store in c
	
	cout<<"Enter a value for d: ";
	cin>>d;                     //take input and store in d
	
	cout<<"Enter a value for g: ";
	cin>>g;                     //take input and store in g
	
	cout<<"Enter a value for v: ";
	cin>>v;	                    //take input and store in v
	

	
	
    R=(2*v+6.22*(c+d))/(g+v);
	cout<<R;         //print answer
	
	return 0;
}