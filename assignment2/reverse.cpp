//862041_Naveen Kumar Tyagi
#include<iostream>
using namespace std;
int main(){
  int num,d1,d2,d3,d4,d5;           //declaration of required variable
  cout<<"Enter a five digit number: ";
  cin>>num;                        //store entered number in num

  d5=num%10;                       //store last digit in d5
  d4=(num/10)%10;                  // store 2nd last digit in d4
  d3=(num/100)%10;                 //store 3rd digit in d3
  d2=(num/1000)%10;                //store 2nd digit in d2
  d1=num/10000;                    // store first digit in d1

  cout<<"Reverse number= "<<d5<<d4<<d3<<d2<<d1;  //print reverse of the entered number
  return 0;


}
