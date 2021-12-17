#include<iostream>
using namespace std;
int main(){
    for(int i=1000;i<=10000;i+=1000){
        float P=i;
        printf("Table for P =%f\n",P);
        for(float r=0.10;r<=0.20;r+=0.01){
            printf("Rate=%f\nYear    V\n",r);
            for(int n=1;n<=10;n++){
                float V=P*(1+r);
                printf("%d      %f\n",n,V);
                P=V;
            }
        }
        cout<<endl;
    }
    return 0;
}