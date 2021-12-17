#include<iostream>
using namespace std;
int main(){
    int n_sticks=57,
        usr_pick,
        cp_pick;
    cout<<"There is 57 sticks,you can choose 1-6 sticks at a time. One who will pick last stick will lose.\n\n"; 
    
    while(n_sticks>1){
        cout<<"\nEnter number of sticks: ";
        cin>>usr_pick;
        //excluding 1 stick then we left with 56 
        //which comes in tables of 7 and 8 greater than 6
        cp_pick=7-usr_pick;//or 8-usr_pick
        cout<<"Computer picked: "<<cp_pick;
        n_sticks=n_sticks-usr_pick-cp_pick;
    }
    cout<<"\nOnly one stick left, since you will pick, you lost.";
    return 0;
}