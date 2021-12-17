#include<iostream>
using namespace std;
int doer(int n){
    static int step=0;
    while(n>1){
        if(n%2==0){
            cout<<n<<" ";
            step++;
            return doer(n/2);
        }
        else if(n%2==1){
            cout<<n<<" ";
            step++;
            return doer(n*3 + 1);
        }
    }
    cout<<n;
    return step;
}
int main(){

    int n;
    cin>>n;
    int steps=doer(n);
    cout<<"\nNo. of Steps: "<<steps;
    return 0;
}