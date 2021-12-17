#include<iostream>
using namespace std;


int main(){
	int a,b,sum,difference,product,quotient,remainder;   
	
	a=100;
	b=9;
	cout<<"Value of a is 100\nValue of b is 9.\n\n\n\n";

	
	// to test addition
	sum=a+b;
	cout<<"Sum of the numbers(a,b): "<<sum<<endl;
	
	
	//to test subtration
	difference=a-b;
	cout<<"Differnce(a-b) of the numbers: "<<difference<<endl;
	
	//to test multiplication
	product=a*b;
	cout<<"Product of the numbers(a,b): "<<product<<endl;
	
	//to test division
	quotient=a/b;
	remainder=a%b;
	cout<<"Quotient: "<<quotient<<"\nRemainder: "<<remainder;
	
	return 0;
}