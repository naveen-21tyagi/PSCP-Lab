#include<iostream>
#include<fstream>
using namespace std;
int found(string s1,string s2[100],int n){
    for(int i=0;i<n;i++){
        if(s1==s2[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    ifstream f1("kk1.txt");
    ifstream f2("kk2.txt");
    ifstream f3("kk3.txt");
    ofstream f4("kk4.txt");
    string words[50];
    int i=0;
    while(f1>>words[i]){
        i++;
    }
    while(f2>>words[i]){
        i++;
    }
    while(f3>>words[i]){
        i++;
    }
    int j=0;
    string dis_words[100];
    int counts[100];
    for(int k=0;k<i;k++){
        int res=found(words[k],dis_words,j);
        if(res!=-1){
        counts[res]++;
        }
        else{
            dis_words[j]=words[k];
            counts[j++]=1;
        }
    }
    for(int i=0; i<j; i++){
        f4<<dis_words[i]<<"  "<<counts[i]<<"\n";
    }
    return 0;
}