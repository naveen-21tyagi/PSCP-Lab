//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
//required structure
struct Employee{
    string name;
    float salary;
    int hours_per_day;
};
//function to do increment as per the working hours
void increment(struct Employee Employee[]){
    //for loop for performing required operation on each person's salary
    for(int i=0; i<10; i++){
        if(Employee[i].hours_per_day==8){
            Employee[i].salary+=50;
        }
        else if(Employee[i].hours_per_day==10){
            Employee[i].salary+=100;
        }
        else if(Employee[i].hours_per_day>=12){
            Employee[i].salary+=150;
        } 
    }
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    struct Employee Employee[10]; //structure array    
    //for loop to get employee details from user 
    for(int i=0; i<10; i++){
        cout<<"Employee "<<i+1<<'\n';
        cout<<"Enter Name: ";
        getline(cin,Employee[i].name);   //for storing name
        cout<<"Enter Salary: $";
        cin>>Employee[i].salary;         //for storing salary
        cout<<"Enter working hours per day: ";
        cin>>Employee[i].hours_per_day;  //for storing hours
        cin.ignore();
    }
    //calling function that perform required increment
    increment(Employee);
    //for loop to print out names and final salaries of employees
    cout<<"\nName of employee\tFinal Salary";
    for(int i=0; i<10; i++){
        cout<<'\n'<<Employee[i].name<<"\t\t\t$"<<Employee[i].salary;
    }
    return 0;
}