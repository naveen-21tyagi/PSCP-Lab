#include<iostream>
using namespace std;
struct Marks{
    int roll_no;
    char section;
    int Marks_in_PSCP;
};
void avg(struct Marks Student[]){
    float sum_G=0;
    float sum_H=0;
    float sum_K=0;
    float sum_L=0;
    float sum_M=0;
    float sum_N=0;
    float sum_Q=0;
    for(int i=0;i<560;i++){
        if(Student[i].section=='G'){
            sum_G+=Student[i].Marks_in_PSCP;
        }
        else if(Student[i].section=='H'){
            sum_H+=Student[i].Marks_in_PSCP;
        }
        else if(Student[i].section=='K'){
            sum_K+=Student[i].Marks_in_PSCP;
        }
        else if(Student[i].section=='L'){
            sum_L+=Student[i].Marks_in_PSCP;
        }
        else if(Student[i].section=='M'){
            sum_M+=Student[i].Marks_in_PSCP;
        }
        else if(Student[i].section=='N'){
            sum_N+=Student[i].Marks_in_PSCP;
        }
        else if(Student[i].section=='Q'){
            sum_Q+=Student[i].Marks_in_PSCP;
        }
    }
    float avg_G=sum_G/80;
    float avg_H=sum_H/80;
    float avg_K=sum_K/80;
    float avg_L=sum_L/80;
    float avg_M=sum_M/80;
    float avg_N=sum_N/80;
    float avg_Q=sum_Q/80;
    float all_sec_avg=(sum_G+sum_H+sum_K+sum_L+sum_M+sum_N+sum_Q)/560;
    cout<<"\nAverage of Section G: "<<avg_G;
    cout<<"\nAverage of Section H: "<<avg_H;
    cout<<"\nAverage of Section K: "<<avg_K;
    cout<<"\nAverage of Section L: "<<avg_L;
    cout<<"\nAverage of Section M: "<<avg_M;
    cout<<"\nAverage of Section N: "<<avg_N;
    cout<<"\nAverage of Section Q: "<<avg_Q;
    cout<<"\nAverage of all section: "<<all_sec_avg;
}
int main(){
    struct Marks Student[560];//7* 80
    for(int i=0;i<560;i++){
        cout<<"Roll no:";
        cin>>Student[i].roll_no;
        cout<<"Section: ";
        cin>>Student[i].section;
        cout<<"Marks in PSCP: ";
        cin>>Student[i].Marks_in_PSCP;
        cout<<endl;
    }
    avg(Student);
    return 0;
}