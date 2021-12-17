#include<iostream>
using namespace std;
struct std{
    int rollno;
    char name[20];
    float marks;
};
int main(){

    
    int n[5];//n[i] = number os std in a ith row
    for(int i=0;i<5;i++){
        cout<<"\n\nenter number of std in row: ";
        cin>>n[i];
    }
    struct std std1[n[0]];
    struct std std2[n[1]];
    struct std std3[n[2]];
    struct std std4[n[3]];
    struct std std5[n[4]];


   
    for(int i=0;i<n[j];i++){
    cout<<"enter std details as rollno ,name and marks.\n";
        cin>>std1[i].rollno;
        cin>> std1[i].name;
        cin>> std1[i].marks;
    }
     // std2
    j++;
    for(int i=0;i<n[j];i++){
    cout<<"enter std details as rollno ,name and marks.\n";
        cin>>std2[i].rollno;
        cin>> std2[i].name;
        cin>> std2[i].marks;
    }
    // std3
    j++;
    for(int i=0;i<n[j];i++){
    cout<<"enter std details as rollno ,name and marks.\n";
        cin>>std3[i].rollno;
        cin>> std3[i].name;
        cin>> std3[i].marks;
    }
    j++;
    // std4

    for(int i=0;i<n[j];i++){
    cout<<"enter std details as rollno ,name and marks.\n";
        cin>>std4[i].rollno;
        cin>> std4[i].name;
        cin>> std4[i].marks;
    }
    // std5
    j++;
    for(int i=0;i<n[i];i++){
    cout<<"enter std details as rollno ,name and marks.\n";
        cin>>std5[i].rollno;
        cin>> std5[i].name;
        cin>> std5[i].marks;
    }
    j=0;

    cout<<"std:\n";
    //printing the structures

    //std1
    for(int i=0;i<n[j];i++){
        cout<<std1[i].rollno<<'\t';
        cout<<std1[i].name<<'\t';
        cout<<std1[i].marks<<'\t';
    }
    cout<<endl;
    j++;
    //std2
    for(int i=0;i<n[j];i++){
        cout<<std2[i].rollno<<'\t';
        cout<<std2[i].name<<'\t';
        cout<<std2[i].marks<<'\t';
    }
    cout<<endl;
j++;
    //std3
    for(int i=0;i<n[j];i++){
        cout<<std3[i].rollno<<'\t';
        cout<<std3[i].name<<'\t';
        cout<<std3[i].marks<<'\t';
    }
    cout<<endl;
j++;
    //std4
    for(int i=0;i<n[j];i++){
        cout<<std4[i].rollno<<'\t';
        cout<<std4[i].name<<'\t';
        cout<<std4[i].marks<<'\t';
    }
    cout<<endl;
j++;
    //std5
    for(int i=0;i<n[j];i++){
        cout<<std5[i].rollno<<'\t';
        cout<<std5[i].name<<'\t';
        cout<<std5[i].marks<<'\t';
    }
    cout<<endl;
    j=0;
    
    return 0;
}