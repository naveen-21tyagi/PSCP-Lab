#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main(){
    ifstream f1("file1.txt");
    ifstream f2("file2.txt");
    ifstream f3("file3.txt");
    ofstream f4("file4.txt");
    string name[100];
    int i=0;
    while(!(f1.eof())){
        getline(f1,name[i]);
        // cout<<"a";
        i++;
    }
    while(!(f2.eof())){
        // cout<<"a";
        getline(f2,name[i]);
        i++;
    }
    while(!(f3.eof())){
        getline(f3,name[i]);
        // cout<<"a";
        i++;
    }
    // cout<<i;
    for(int j=0; j<i-1; j++){
        int loc=j;
        string min=name[j];
        for(int k=j; k<i; k++){
            int res=strcmp(min.c_str(),name[k].c_str());
            if(res>0){
                //cout<<"a";
                min=name[k];
                loc=k;
            }
        }
        //swapping
        string temp=name[j];
        name[j]=name[loc];
        name[loc]=temp;
    }
    for(int j=0;j<i;j++){
        f4<<name[j]<<endl;
    }
    f1.close();
    f2.close();
    f3.close();
    f4.close();
    return 0;
}