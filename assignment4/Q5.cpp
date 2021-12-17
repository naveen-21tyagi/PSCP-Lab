//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    float ang1,ang2,ang3;          //variable declaration for storing angles
    cout<<"Enter three angles: \n";
    cin>>ang1>>ang2>>ang3;

    
    if(ang1+ang2+ang3==180){                       //check whether  the angles form trianle or not 
        cout<<"They  will form triangle. ";  

        //if statement to tell traingle is equilateral if it is    
        if((ang1==ang2)&&(ang1==ang3)&&(ang2==ang3)){      
            cout<<"\nThe traingle will be equilateral.";
            }

        //else if statement to tell triangle is scalene or right angled   
        else if((ang1!=ang2)&&(ang1!=ang3)&&(ang2!=ang3)){ 
            if((ang1==90)||(ang2==90)||(ang3==90)){
                cout<<"\nThe triangle will be right-angled.";
            }
            else{
                cout<<"\nThe triangle will be scalene.";
            } 
        }

        //else if statement to tell tiangle is isosceles or right angled isosceles
        else if((ang1==ang2)||(ang2==ang3)||(ang1==ang3)){
            if((ang1==90)||(ang2==90)||(ang3==90)){
                cout<<"\nThe triangle will be right-angled isosceles.";
                }      
            else{
                cout<<"\nThe triangle will isosceles.";
            }
        }
    } 
    else{
        cout<<"They will not form triangle. ";
        }
    return 0;
}  