//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;

//required structure
struct BankDetails{
    string name;
    int account_number;
    float balance;
};
//function to print out names of customes whose account balance is less than $200
void low_balance(struct BankDetails bank_details[],int n_customers){
    cout<<"Customers having balance less than $200.\n";
    for(int i=0; i<n_customers; i++){
        if(bank_details[i].balance<200){
            cout<<bank_details[i].name<<'\n';
        }
    }
}
//functon to increase balance by $100 whose account balance is more than $1000
void increment(struct BankDetails bank_details[],int n_customers){
    cout<<"Balance of customers having more than $1000 is incremented by $100.\n";
    cout<<"Final Balance.";
    for(int i=0; i<n_customers; i++){
        if(bank_details[i].balance>1000){
            bank_details[i].balance+=100;
            cout<<'\n'<<bank_details[i].name<<"\t$"<<bank_details[i].balance;
        }
    }
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    int n_customers; //to store number of customers
    cout<<"Enter number of customers: ";
    cin>>n_customers;
    struct BankDetails bank_details[n_customers];

    //for loop to take customers details from user
    for(int i=0; i<n_customers; i++){
        cout<<"Customer number: "<<i+1<<'\n';
        cout<<"Enter name of customer: ";
        cin.ignore();
        getline(cin,bank_details[i].name);  // store name of customer
        cout<<"Account Number of customer: ";
        cin>>bank_details[i].account_number; // store account number
        cout<<"Balance of the customer: $";
        cin>>bank_details[i].balance;   //store balance
    }
    //printing out name 
    //whose bank balance is less than $200 by low_balance function
    low_balance(bank_details,n_customers);
    //printing out names whose balance is increased
    cout<<"Final balance of those whose account balance was more than $1000:-\n";
    increment(bank_details,n_customers);
    return 0;
}