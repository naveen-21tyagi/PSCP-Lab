//862041_Naveen Kumar Tyagi
#include<iostream>
using namespace std;
int main(){
  int num,d1,d2,d3,d4,d5,sum;             //declaration of required variables
  cout<<"Enter a five digit number: ";
  cin>>num;
  d1=num%10;                             //store last digit in d1
  d2=(num/10)%10;                        //store 2nd last digit in d2
  d3=(num/100)%10;                       //store 3rd last digit in d3
  d4=(num/1000)%10;                      //store second digit in d4
  d5=num/10000;                          //store first digit in d5
  sum=d1+d2;
  if((d1+d2)>=10){
    cout<<d1;
  }
  else {
    sum=sum+d3;
    if (sum>=10){
      cout<<d1+d2;
    }
      else{
        sum=sum+d4;

        if(sum>=10){
          cout<<d1+d2+d3;
        }
          else{
            sum=sum+d5;
            if(sum>=10){
              cout<<d1+d2+d3+d4;
            }
              else{
                cout<<d1+d2+d3+d4+d5;
              }


          }
        }

      }

}
