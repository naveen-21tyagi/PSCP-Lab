//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    //declaration of required variables
    int i=0;         
    char ch;

    //while loop to print ascii values and their equivalent characters till 99
    while(i<=99){
        ch=i;
        cout<<i<<" "<<ch<<"  ";
        i++;
    }   
    cout<<endl;

    //while loop to print ascii values and their equivalent characters from 100 to 256   
    while(i<=256){
        ch=i;
        cout<<i<<" "<<ch<<"   ";
        i++;
    }
    return 0;
}