#include<iostream>
#include<cstring>
using namespace std;
int main(){
    cout<<"Enter first name: ";
    string name1;
    getline(cin,name1);
    cout<<"Enter second name: ";
    string name2;
    getline(cin,name2);
    cout<<"Enter third name: ";
    string name3;
    getline(cin,name3);
    cout<<"Enter fourth name: ";
    string name4;
    getline(cin,name4);
    string *name[4]={&name1,&name2,&name3,&name4};
    //sorting (insertion sort)
    for(int i=0;i<3;i++){
        int loc=i;
        string min=*name[i];
        for(int j=i;j<4;j++){
            int res=strcmp(min.c_str(),(*name[j]).c_str());
            if(res>0){
                min=*name[j];
                loc=j;
            }
        }
        string temp=*name[i];
        *name[i]=*name[loc];
        *name[loc]=temp;
    }
    for(int i=0;i<4;i++){
        cout<<*name[i]<<" ";
    }
    
}