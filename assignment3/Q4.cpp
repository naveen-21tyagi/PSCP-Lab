//862041_Naveen Kumar Tyagi
#include<iostream>
using namespace std;
int main(){
    int days; //variable declaration
    float fine;//variable declaration
    
    cout<<"Enter number of days the member is late to return the book: ";
    cin>>days; //store enterd in number in days
    
    //if statement to print fine and info about membership if if days<5
    if(days<=5){
        fine=0.5*days;
        cout<<"\nFine is "<<fine<<" Rs.";
        cout<<"\nMembership is not cancelled.";
    }
    //else if statement to print fine and info about membership if if 5<days<10 
    else if((days>=6)&&(days<=10)){
        fine=0.5*5 +1*(days-5);
        cout<<"\nFine is "<<fine<<" Rs.";
         cout<<"\nMembership is not cancelled.";
    }
    //else if statement to print fine and info about membership if if 10<days<30
    else if((days>=10)&&(days<=30)){
        fine=0.5*5 +1*5 + 5*(days-10);
        cout<<"\nFine is "<<fine<<" Rs.";
         cout<<"\nMembership is not cancelled.";
    }
    //else statement to print fine and info about membership if if days>30
    else{
        fine=0.5*5 +1*5 + 5*(days-10);
        cout<<"\nFine is "<<fine<<" Rs.";
        cout<<"\nMembership is cancelled.";
    }
    return 0;
}