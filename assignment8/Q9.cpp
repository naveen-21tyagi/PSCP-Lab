//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
//class for evaluating area of rectangle
class Area{
    private:
    float l,b; //variable to store length and breadth

    //function to evaluate and return area
    float getArea(float l,float b){
        float area=l*b; 
        return area;
    }

    public:
    //function to take length and breadth as parameter 
    //those will be stored in l an b respectively
    //it also print area finally
    void setDim(float length,float breadth){
        l=length;
        b=breadth;
        cout<<getArea(l,b);//print area
    }
};
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    Area rectangle; //class object instantiated
    float length,breadth; 
    cout<<"Enter length and breadth of rectangle: ";
    cin>>length>>breadth; //taking input for length and breadth
    cout<<"\nArea: ";
    rectangle.setDim(length,breadth);  //passing dimension of rectangle and printing area
    return 0;
}