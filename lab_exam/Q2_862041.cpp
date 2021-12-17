#include<iostream>
using namespace std;
int main(){
    cout<<"Naveen Kumar Tyagi_862041_Section F\n";
    int n_opp;
    cout<<"Enter number of opponents: ";
    cin>>n_opp;
    int strengths[n_opp],S;
    cout<<"Enter opponents Strength: ";
    for(int i=0;i<n_opp;i++){
        cin>>strengths[i];
    }
    cout<<"\nEnter Shubham Strength: ";
    cin>>S;
    int i;
    for(i=0;i<n_opp;i++){
        if(S<=strengths[i]){
            cout<<"\nNo.";
            break;
        }
        else{
            S+=strengths[i];
        }
    }
    // if i becomes n_opp means 
        //shubham wins
    if(i==n_opp){
        cout<<"\nYes.";
    }
    return 0;
}