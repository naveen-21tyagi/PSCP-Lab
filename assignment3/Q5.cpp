//862041_Naveen Kumar Tyagi
#include<iostream>
using namespace std;
int main(){
    int num,d1,d2,d3,rev_num;   //declaration of variables
    cout<<"Enter a three digit number: ";
    cin>>num;     //store entered number in num
    
    d1=num/100;   //store first digit in d1
    d2=(num/10)%10;// store second digit in d2
    d3=num%10;    //store third digit in d3
    
    rev_num=d3*100+d2*10+d1;        //store Reverse of given number in rev_num
    cout<<"\nReverse of given number: "<<rev_num;
    
    
    //if else statements to print whther the given number is palindrome or not
    if(num==rev_num){
        cout<<"\nGiven number is palindrome.";
    }
    else{
        cout<<"\nGiven number is not palindrome.";
    }
return 0;
}
