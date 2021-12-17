//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    int population=9000;    //declaration of variable population to store population
    int year=0;             //declaration of varible year 
    float rate=0.15;        //rate of population increament 

    //while loop for printing population in successive years till population surpass 50000
    while(population<=50000){
        year++;
        population=population*(1+rate);
        cout<<"Population after "<<year<<" year: "<<population<<endl;
        
    }
    cout<<"Population surpass 50000 after "<<year<<" years.";
    return 0;
}