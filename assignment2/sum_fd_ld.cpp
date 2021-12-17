//862041_Naveen Kumar Tyagi
#include<iostream>
using namespace std;
int main(){
  int num,fd,ld,sum;                 //declaration of required variable
  cout<<"Enter a four digit number: ";
  cin>>num;                          //store entered number in num

  fd=num/1000;                       //store first digit in fd
  ld=num%10;                         //store last digit in ld

  sum=fd+ld;                         //sum of first and last digit

  cout<<"Sum of first and last digit: "<<sum; //print sum of first and last digit of entered number

  return 0;
}
