#include<iostream>
using namespace std;
float fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("First %d catalan numbers\n",n);
    for(int i=1;i<=n;i++){
        float cata=fact(2*i)/(fact(i)*fact(i)*(i+1));
        printf("%1.0f  ",cata);
    }
    return 0;
}