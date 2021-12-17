#include<iostream>
using namespace std;
struct Emp{
    char name[30];
    int ext_hr;
    int chldn;
};
void print(struct Emp Emply[],int N){
    for(int i=0;i<N;i++){
        float salary=36000;
        float gross_pay=salary+(100*Emply[i].ext_hr);
        float p_tax=0.02*gross_pay;
        float p_fund=0.1*gross_pay;
        float i_tax=0.05*gross_pay;
        float chldn_edu=0.02*gross_pay*Emply[i].chldn;
        float net_pay=gross_pay - (p_tax+p_fund+i_tax) + chldn_edu;
        cout<<"\n"<<Emply[i].name<<'\t'<<gross_pay<<"\t\t"<<net_pay;
    }
}
int main(){
    int N;
    cout<<"No. of employee: ";
    cin>>N;
    struct Emp Emply[N];
    //take input
    for(int i=0;i<N;i++){
        cout<<"Name: ";
        cin>>Emply[i].name;
        cout<<"Extra hours: ";
        cin>>Emply[i].ext_hr;
        cout<<"No. of children: ";
        cin>>Emply[i].chldn;
    }
    //print
    cout<<"Name\tGross Pay\tNet Pay";
    print(Emply,N);
    return 0;
}