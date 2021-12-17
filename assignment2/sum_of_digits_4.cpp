//862041_Naveen Kumar Tyagi
#include<iostream>
using namespace std;
int main(){
  int num,d1,d2,d3,d4,sum;              //declaration of variables
cout<<"This program will print sum of 4 digits of number you will enter.\nEnter a 4 digit number: ";
cin>>num;                              //store entered number in num
d4=num%10;                             //store last digit in d4
d3=(num/10)%10;                        //store 3rd digit in d3
d2=(num/100)%10;                       //store 2nd digit in d2
d1=num/1000;                           //store 1st digit in d1

sum=d1+d2+d3+d4;                      //store sum of digits in sum
cout<<"\nSum of digits: "<<sum;       //print sum of digits
return 0;
}
