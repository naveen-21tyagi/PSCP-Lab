#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<5;i++){
        for(int j=i+1;j<5;j++){                    //             1
            cout<<"   ";                          //           2  2  2
        }                                         //        3  3  3  3  3
        for(int j=0;j<(2*i-1);j++){               //     4  4  4  4  4  4  4
            cout<<i<<"  ";
        }
        cout<<endl;
    }
    for(int i=1;i<5;i++){
        for(int j=i+1;j<5;j++){                    //             1
            cout<<"   ";                          //           3  3  3
        }                                         //        5  5  5  5  5
        for(int j=0;j<(2*i-1);j++){               //     7  7  7  7  7  7  7
            cout<<2*i-1<<"  ";
        }
        cout<<endl;
    }
/*        1                  
      1  2  3
   1  2  3  4  5
1  2  3  4  5  6  7     */
    for(int i=1;i<5;i++){
        for(int j=i+1;j<5;j++){
            cout<<"   ";                         
        }                                        
        for(int j=1;j<=(2*i-1);j++){               
            cout<<j<<"  ";
        }
        cout<<endl;
    }
    /*
         1
      3  2  1
   5  4  3  2  1
7  6  5  4  3  2  1    */
     for(int i=1;i<5;i++){
        for(int j=i+1;j<5;j++){
            cout<<"   ";                         
        }                                        
        for(int j=2*i-1;j>0;j--){               
            cout<<j<<"  ";
        }
        cout<<endl;
    }
/*       *
      *  *  *
   *  *  *  *  *
*  *  *  *  *  *  *         */
      for(int i=1;i<5;i++){
        for(int j=i+1;j<5;j++){
            cout<<"   ";                         
        }                                        
        for(int j=1;j<=2*i-1;j++){               
            cout<<"*  ";
        }
        cout<<endl;
    }
    /*      1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
*/
    for(int i=1;i<5;i++){
        for(int j=1;j<5-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=i-1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    /*
      A
    A B A 
  A B C B A
A B C D C B A*/
    for(char i=65;i<69;i++){
        for(char j=68;j>i;j--){
            cout<<"  ";
        }
        for(char j=65;j<=i;j++){
            cout<<j<<" ";
        }
        for(char j=i-1;j>=65;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}