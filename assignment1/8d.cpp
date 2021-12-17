#include<iostream>
using namespace std;
int main(){
	float a,b,c,x,y,A;         //declaration of variables
	
	
	cout<<"Enter a value for a: ";
	cin>>a;                     //take input and store in a
	
	cout<<"Enter a value for b: ";
	cin>>b;                     //take input and store in b
	
	cout<<"Enter a value for c: ";
	cin>>c;                     //take input and store in c
	
	cout<<"Enter a value for x: ";
	cin>>x;	                    //take input and store in m
	
	cout<<"Enter a value for y: ";
	cin>>y;                     //take input and store in q
	

	
	
	
    A=((7.7*b*(x*y+a))/c-0.8+2*b)/((x+a)*(1/y));
	cout<<A;                   //print answer
	
	return 0;
}