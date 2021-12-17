//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    int i,j,num,space;
    cin>>num;
    char ch;
    for(i=65;i<=65+num;i++){
            ch=i;
            cout<<ch;    
        }
        for(i=65+num-1;i>=65;i--){
            ch=i;
            cout<<ch;
        }
    cout<<endl;
    for(j=1;j<=num;j++){
        for(i=65;i<=65+num-j;i++){
            ch=i;
            cout<<ch; 
        }
        for(space=1;space<=2*j-1;space++){
            cout<<" ";
        }
        for(i=65+num-j;i>=65;i--){
            ch=i;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}