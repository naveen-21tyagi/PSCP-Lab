//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
// required class 
class Employee{
    private:
    //function to add $10 to salary
    //this will be called when salary is less than $500
    float AddSal(float salary){
        salary+=10;
        return salary;
    }
    //function to add $5 to salary
    //this will be called when working hours per day is more than 6
    float AddWork(float salary){
        salary+=5;
        return salary;
    }
    public:
    //function which take salary and working hours per day as arguements
    //and call required function to perform desired increment to salary
    //then it will final salary
    void getInfo(float salary,int num_hours){
        if(salary<500){
            salary=AddSal(salary); //function call and storing return value in salary
        }
        if(num_hours>6){
            salary=AddWork(salary); //function call and storing return value in salary
        }
        cout<<"Final Salary: $"<<salary; //print final salary
    }
};
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    Employee Naveen; //class object instantiated
    float salary;
    int hours;
    cout<<"Employee Name: Naveen\nEnter Salary: ";
    cin>>salary;
    cout<<"Enter working hours: ";
    cin>>hours;
    Naveen.getInfo(salary,hours); //passing values. this will print final salary also
    return 0;
}