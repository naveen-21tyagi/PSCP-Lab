#include<iostream>
#include<cstring>
//#include<fstream>
using namespace std;
int main(){
    char words[2][30];
    for(int i=0;i<2;i++)
    cin.getline(words[i],30);

    // char cat[60]=words[0];
    strcat(words[0],words[1]);
    int len =strlen(words[0]);
    int i=0;
    // char word[len]=cat;
    for(i=0;i<len/2;i++){
        if(words[0][i]!=words[0][len-1-i]){
            break;
        }
        else i++;
    }
    cout<<words[0];
    if(i==len/2) cout<<"\nPalindrome";
    else cout<<"\nNot palindrome.";
    return 0;
}