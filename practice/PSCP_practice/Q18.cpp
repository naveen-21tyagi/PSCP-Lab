#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream input("FIRST.txt");
    ofstream output("SECOND.txt");
    char word[20];
    while(input>>word){
        if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u'){
            output<<word<<" ";
        }
    }
    return 0;
}