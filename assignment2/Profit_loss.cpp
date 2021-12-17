//862041_Naveen Kumar Tyagi
#include<iostream>
using namespace std;
int main(){
  float cp,mp,dis,profit,loss,sp;        // declaration of required variables
  cout<<"Enter cost price: ";
  cin>>cp;                              // store cost price in cp
  cout<<"Enter mark price: ";
  cin>>mp;                             // store mark price in mp
  cout<<"Enter discount percent: ";
  cin>>dis;                            // store discount percent in dis
  sp=mp-(dis/100*mp);                  // calclulation for selling price and store in sp
  cout<<"Selling price: "<<sp;

  //if statement to print profit percentage if seller has made
  if((sp-cp)>0){
      profit=(sp-cp)/cp*100;
      cout<<"\nSeller has made and profit percent is "<<profit<<"%";
    }
  //else statement to print loss percentage seller has incurred  
  else{
    loss=(cp-sp)/cp*100;
    cout<<"\nSeller has incurred loss and loss percent is "<<loss<<"%";
      }


      return 0;
}
