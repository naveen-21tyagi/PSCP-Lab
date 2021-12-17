#include<iostream>
#include<iomanip>
using namespace std;
struct statistics{
    char name[10];
    int runs;
    int innings;
    int notOut;
    float avg;
};
int main(){
    int n;
    cout<<"Enter number of players: ";
    cin>>n;
    cout<<"\n\n";
    statistics players[3];
    for(int i=0;i<n;i++){
        cout<<"Enter name: ";
        cin>>players[i].name;
        cout<<"Enter Runs: ";
        cin>>players[i].runs;
        cout<<"Enter innings: ";
        cin>>players[i].innings;
        cout<<"Enter times of not out: ";
        cin>>players[i].notOut;  
        players[i].avg=players[i].runs/(players[i].innings-players[i].notOut);
    }
    cout<<setw(13)<<"Player's name"<<"\t"
        <<setw(5)<<"Runs"<<"\t"
        <<setw(7)<<"Innings"<<"\t"
        <<setw(12)<<"Times not out"<<"\t"
        <<setw(7)<<"Average\n";
    for(int i=0;i<n;i++){
        cout<<setw(13)<<players[i].name<<"\t"
            <<setw(5)<<players[i].runs<<"\t"
            <<setw(7)<<players[i].innings<<"\t"
            <<setw(12)<<players[i].notOut<<"\t"
            <<setw(7)<<players[i].avg<<"\n";
    }
    return 0;
}