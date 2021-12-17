#include<iostream>
using namespace std;
struct BankDeposit{
    double amt;
    int tenure;
};
struct Dates{
    int date;
    int month;
    int year;
};

int main(){
    struct BankDeposit Naveen;
    Naveen.amt=2000;
    Naveen.tenure=20;
    struct Dates DOB;
    DOB.date=21;
    DOB.month=4;
    DOB.year=2002;
    struct Dates Deposit;
    Deposit.date=15;
    Deposit.month=9;
    Deposit.year=2009;

    int age=2021-DOB.year;
    float interest=0.08;
    if(age>=60){
        interest=0.09;
    }
    //cout<<interest;
    float receive_amt=Naveen.amt +Naveen.amt*interest*Naveen.tenure;
    cout<<receive_amt;
    return 0;
}