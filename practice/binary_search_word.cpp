//search word by no. of letters
#include<iostream>
#include<cstring>
using namespace std;
int binary_search(string *words,int l,int h,int search){
    int mid=(l+h)/2;
    int length=strlen(words[mid].c_str());
    if(length==search){
        return mid;
    }
    else if(length>search){
        return binary_search((string*)words,l,mid-1,search);
    }
    else if(length<search){
        return binary_search((string*)words,mid+1,h,search);
    }
    return -1;
}
int main(){
    int n,search;
    cout<<"Enter no. of words: ";
    cin>>n;
    string words[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,words[i]);
    }
    // for(int i=0; i<n; i++){
    //     cout<<words[i]<<endl;;
    // }
    cout<<"Enter the length of the word: ";
    cin>>search;
    int res=binary_search((string*)words,0,n,search);
    if(res==-1){
        cout<<"Not found.";
    }
    else{
        cout<<"Word found at "<<res+1<<".\nThe word is "<<words[res];
    }
    return 0;
}