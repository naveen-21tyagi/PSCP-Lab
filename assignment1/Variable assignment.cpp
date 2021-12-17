#include <iostream>                     // includes iostream header file
using namespace std;                    //tell compiler to use std namespace

  
int main() {                           


	int i;                              //declares a varible with integer dataype   
	i=21;                               // assign value
	cout<<"\nThe value of n(int): "<<i; //  print value of i           
	
	float f;                            //declares a varible with float dataype
	f=1.22;                             // assign value
    cout<<"\nThe value of f(float): "<<f;//  print value of f
     
    char a;                              //declares a varible with character dataype
    a='n';                               // assign value
    cout<<"\nThe value of a(char): "<<a<<endl;//  print value of a
    
    
    bool b;                               //declares a varible with boolean dataype
    b=true;                               // assign value
    cout<<"The value of b(bool): "<<b;     //  print value of b
    
    wchar_t w;                            //declares a varible with wide character dataype
    w=L'd';                               // assign value
    cout<<"\nThe value of w(wide character): "<<w;//  print value of w
    
    double d;                             //declares a varible with double dataype
    d=12.223;                             // assign value
    cout<<"\nThe value of d(double): "<<d;//  print value of d
     
	return 0;             
}