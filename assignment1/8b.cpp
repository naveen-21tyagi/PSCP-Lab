#include<iostream>
using namespace std;

int main(){
	
	float a,b,c,X;   //declaration of variables
	
	cout<<"Enter a value for a: ";
	cin>>a;             // take input and store in a
	
	cout<<"Enter a value for b: ";
	cin>>b;             // take input and store in b
	
	cout<<"Enter a value for c: ";
	cin>>c;            // take input and store in c
	
	
	X=(-b+(b*b)+24*a*c)/(2*a);
	cout<<X;               //print answer
	
	return 0;
}