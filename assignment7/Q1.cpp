//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;

void binary_form(int num,int bin[20],int i,int *last_index){
    //perform division and store remainder
    //and pass quotient to itself to do same again
    //until quotient became 0 
    if(num>0){
        bin[i]=num%2;
        i++;
        binary_form(num/2,bin,i,last_index);
    }
    //when conversion is completed it store last index
    else if(num==0){
       *last_index=i-1;
    }
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F";
    //last_index is to store last index of bin array
    //upto which bits for num is stored
    int num,bin[20],last_index;    
    cout<<"\nEnter number: ";
    cin>>num;
    //call of function to convert decimal number to binary
    binary_form(num,bin,0,&last_index); 

    cout<<"\nBinary equivalent: ";
    for(int i=last_index;i>=0;i--){  //print binary equivalent
        cout<<bin[i];
    }
    return 0;
}