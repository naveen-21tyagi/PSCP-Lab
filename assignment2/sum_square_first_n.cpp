//862041_Naveen Kumar Tyagi
#include <iostream>
using namespace std;
int main(){
  int num,sum;               // declaration of required variable
  cout<<"Enter a integer value: ";
  cin>>num;                  // store entered value in num

  sum=(num*(num+1)*(2*num+1))/6;     // store sum of square of first natural numbers

  cout<<"\n\n\nThe sum of squares of "<<num<<" natural numbers:"<<sum; //print  sum of square of first natural numbers
  return 0;

}
