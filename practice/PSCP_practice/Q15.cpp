#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int matrix[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    int diagonal_sum=0;
    for(int i=0; i<m; i++){
        diagonal_sum+=matrix[i][i];
    }
    cout<<diagonal_sum;
    return 0;
}