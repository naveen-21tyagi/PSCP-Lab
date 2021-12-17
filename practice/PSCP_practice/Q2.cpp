#include<iostream>
using namespace std;
int main(){
    char number[10];
    char digit;
    cout<<"enter number: ";
    cin>>number;
    cout<<"enter digit of which occurence is to be found: ";
    cin>>digit;
    int count=0;
    for(int i=0;number[i]!='\0';i++){
        if(number[i]==digit){
            count++;
        }
    }
    cout<<"count: "<<count;
    return 0;
}