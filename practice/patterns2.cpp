#include<iostream>
using namespace std;
int main(){
    /*
      A 
    B B B
  C C C C C 
D D D D D D D   */
    for(char i=65;i<=68;i++){
        for(char j=68;j>i;j--){
            cout<<"  ";
        }
        for(int j=0;j<2*(i-65)+1;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    /*
      A
    C C C
  E E E E E
G G G G G G G*/
    for(char i=65;i<=71;i=i+2){
        for(char j=71;j>i;j=j-2){
            cout<<"  ";
        }
        for(int j=0;j<2*(i-65)+1;j=j+2){
            cout<<i<<" ";
        }
        cout<<endl;
    }   
    /*
      A
    A B A 
  A B C B A
A B C D C B A    */
    for(int i=0;i<4;i++){
        for(int j=3;j>i;j--){
            cout<<"  ";
        }
        for(char j=65;j<=65+i;j++){
            cout<<j<<" ";
        }
        for(char j=64+i;j>64;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    /*
      A 
    A B C
  A B C D E
A B C D E F G    */
    for(int i=0;i<4;i++){
        for(int j=3;j>i;j--){
            cout<<"  ";
        }
        for(char j=65;j<=65+2*i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    /*
      A 
    C B A
  E D C B A 
G F E D C B A     */
    for(int i=0;i<4;i++){
        for(int j=3;j>i;j--){
            cout<<"  ";
        }
        for(char j=65+2*i;j>=65;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    /*
      0
    1 0 1
  2 1 0 1 2 
3 2 1 0 1 2 3    */ 
    for(int i=0;i<4;i++){
        for(int j=3;j>i;j--){
            cout<<"  ";
        }
        for(int j=i;j>=0;j--){
            cout<<j<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }   

}