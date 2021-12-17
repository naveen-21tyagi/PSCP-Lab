#include<iostream>
using namespace std;
struct Bill{
    char name[10];
    int units;
    float bill;
};
int main(){
    int n;
    cout<<"Enter number of customers: ";
    cin>>n;
    Bill customers[n];
    for(int i=0; i<n; i++){
        cout<<"Enter name: ";
        cin>>customers[i].name;
        cout<<"Enter units: ";
        cin>>customers[i].units;
        if(customers[i].units<=100){
            customers[i].bill=float(customers[i].units)*0.6;
        }
        else if(customers[i].units<=300){
            customers[i].bill=float(customers[i].units-100)*0.8 + 100*0.6;
        }
        else{
            customers[i].bill=float(customers[i].units-300)*0.9 + 100*0.6 + 200*0.8;
        }

        if(customers[i].bill<50) customers[i].bill=50;
        else if(customers[i].bill>300) customers[i].bill=customers[i].bill*(1+0.15);
    }
    cout<<"\n\nCustomer\tBill\n";
    for(int i=0; i<n; i++){
        cout<<customers[i].name<<"\t\t"<<customers[i].bill<<"\n";
    }
    return 0;
}