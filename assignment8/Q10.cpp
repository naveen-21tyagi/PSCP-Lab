//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
#include<cmath>
using namespace std;
//class for complex number and for their addition
class complex{
    float x;  //for storing real part 
    float y;  //for storing imaginary part
    public:
    //function to assign real and imaginary part to x and y
    void set(float real,float imaginary){
        x=real;
        y=imaginary;
    }
    //function to display complex and arguement
    //i represents iota
    void disp(){
        cout<<x<<" + i"<<y<<"\targ(radian) = "<<atan(x/y);
    }
    //function for addition with 'complex' datatype
    complex sum(complex Z){
        complex sum;
        sum.x=x + Z.x; //addtion of real part
        sum.y=y + Z.y; //addtion of imaginary part
        return sum;
    }
};
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    complex Z1, Z2, Z3; //complex class object instantiated
    float re,img; //to  store real and imaginary part

    //taking input for first complex number
    cout<<"Enter a complex number.\n";
    cout<<"Real part: ";
    cin>>re;    //taking input from user for real part
    cout<<"Imaginary part: ";
    cin>>img;  //taking input from user for imaginary part
    Z1.set(re,img);

    //taking input for second complex number
    cout<<"Enter another complex number.\n";
    cout<<"Real part: ";
    cin>>re;  //taking input from user for real part
    cout<<"Imaginary part: ";
    cin>>img;  //taking input from user for imaginary part
    Z2.set(re,img);

    Z3=Z1.sum(Z2); //calling sum function 
    //displaying(printing) the three complex number in console
    cout<<"\nFirst complex number: ";
    Z1.disp();
    cout<<"\nSecond complex number: ";
    Z2.disp();
    cout<<"\nSum of those complex numbers: ";
    Z3.disp();
    return 0;
}