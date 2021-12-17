//862041_Naveen Kumar Tyagi
#include<iostream>
using namespace std;
int main(){
    float hardness,c_content,ten_str; //declaration of required variables in this context
    cout<<"This program is to determine grade of steel.";
    cout<<"\nEnter hardness: ";
    cin>>hardness;                 //store steel hardness in var. hardness
    
    cout<<"\nEnter carbon content: ";
    cin>>c_content;                //store steel carbon conent in var. c_content
    
    cout<<"\nEnter tensile strength: ";
    cin>>ten_str;                  //store steel tensile strength in var. ten_str
    
    
    
    // if statements to print grade of steel corresponds to conditions satisfied
    
    
    if((hardness>50)&&(c_content<0.7)&&(ten_str>5600)){
        cout<<"\nGrade is "<<10;
    }
    else if((hardness>50)&&(c_content<0.7)){
        cout<<"\nGrade is "<<9;
    }
    else if((c_content<0.7)&&(ten_str>5600)){
        cout<<"\nGrade is "<<8;
    }
    else if((hardness>50)&&ten_str>5600){
        cout<<"\nGrade is "<<7;
    }
    else if((hardness>50)||(c_content<0.7)||(ten_str>5600)){
        cout<<"\nGrade is "<<6;
    }
    else{
        cout<<"\nGrade is "<<5;
        }
        
    return 0;
}