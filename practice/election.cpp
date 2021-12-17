#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int counts[6]={};
    char ch;
    printf("Press f to finish voting.\n");
    while(ch!='f'){
        cin>>ch;
        switch(ch){
            case '1':
            counts[ch-49]++;
            break;
            case '2':
            counts[ch-49]++;
            break;
            case '3':
            counts[ch-49]++;
            break;
            case '4':
            counts[ch-49]++;
            break;
            case '5':
            counts[ch-49]++;
            break;
            default:
            counts[ch-49]++;
        }
    }
    
    cout<<setw(9)<<"Candidate   "<<setw(5)<<"Votes\n";
    for(int i=0;i<5;i++){
        cout<<setw(9)<<i+1<<setw(5)<<"  "<<counts[i]<<"\n";
    }
    cout<<"Spoilt Ballots: "<<counts[5];
    return 0;
}