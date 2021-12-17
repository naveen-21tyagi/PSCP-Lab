#include<iostream>
using namespace std;
int main(){
    cout<<"Naveen Kumar Tyagi_862041_Section F\n";
    char seats[7][5]={{'1','A','B','C','D'},
                      {'2','A','B','C','D'},
                      {'3','A','B','C','D'},
                      {'4','A','B','C','D'},
                      {'5','A','B','C','D'},
                      {'6','A','B','C','D'},
                      {'7','A','B','C','D'}};
    
    char ch1,ch2;
    cout<<"Available seats:\n";
    for(int i=0; i<7; i++){
        for(int j=0; j<5; j++){
            cout<<seats[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter no to finish booking.";
    cout<<"\nEnter seat to be booked:";
    cin>>ch1>>ch2;
    while((ch1)!='n'){
        seats[ch1-49][ch2-64]='X';
        cout<<"Available seats:\n";
        for(int i=0; i<7; i++){
            for(int j=0; j<5; j++){
                cout<<seats[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"\nEnter seat to be booked:";
        cin>>ch1>>ch2;
    }
    return 0;
}