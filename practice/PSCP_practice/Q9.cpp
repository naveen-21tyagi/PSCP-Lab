#include<iostream>
#include<cstdio>
#include<ctime>

using namespace std;
int flip(){
    int max=2;
    srand(time(0));
    return rand()%max;
}
int main(){
    int count_h=0,
        count_t=0;
    for(int i=0; i<100; i++){
        int res=flip();
        if(res==0){
            cout<<"Tail.\n";
            count_t++;
        }
        else if(res==1){
            cout<<"Head.\n";
            count_h++;
        }
        system("PAUSE");
    }
    cout<<count_h<<" "<<count_t;

    return 0;
}