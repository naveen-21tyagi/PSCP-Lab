//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
#include<cmath> //for square root function
using namespace std;
//class definition
class Triangle{
    public:
    //constructor to take sides length as parameters
    Triangle(float a,float b,float c){
        float parameter=a+b+c; //to store parameter
        cout<<"\nParameter of the triangle: "<<parameter;  //print perimeter

        float s=parameter/2;  //semi-perimeter
        //calculating area using heron's formula
        float area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"\nArea of the triangle: "<<area; //print area
    }
};
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    //class object
    //parametrized constructor instantiated 
    //will print perimeter and area also
    float a,b,c;
    cout<<"\nEnter side lengths of triangle: ";
    cin>>a>>b>>c;
    Triangle A(a,b,c); 
    return 0;
}