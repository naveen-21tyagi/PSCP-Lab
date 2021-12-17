//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
#include<cstring>//for strcmp() and c_str()
#include<fstream>
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    ifstream file("Q1_text.txt"); //file object instantiated
    file.seekg(0,ios::end); //bring file pointer position to end of file
    int n_characters=file.tellg();
    file.seekg(0,ios::beg); //bring file pointer to begining of file
    string words[100];
    //variable used for index to store words
    //it also represent word count
    int i=0; 
    //creating an pointer array
    //pointing to words
    string *ptr_words[100];
    while(!file.eof()){
        file>>words[i]; //storing word to words array
        ptr_words[i]=&words[i]; //storing address
        i++;
    }
    //sorting (insertion sort) of address in pointer array
    //on the basis of names they are pointing 
    //below code will sort in lexicographical order
    for(int j=0;j<i-1;j++){
        int loc=j;
        string min=*ptr_words[j];
        for(int k=j;k<i;k++){
            //strcmp is predefined
            //it compares string char by char
            //to do so, it needs character array
            //so c_str() is used 
            //it converts string to char array
            int res=strcmp(min.c_str(),(*ptr_words[k]).c_str());
            if(res>0){
                min=*ptr_words[k];
                loc=k;
            }
        }
        //swapping the addresses
        string *temp=ptr_words[j];
        ptr_words[j]=ptr_words[loc];
        ptr_words[loc]=temp;
    }
    file.seekg(0,ios::beg); //bring position of file pointer to begining of file
    int n_lines=0;//to store number of lines
    char ch;
    while(file>>ch){
        if(ch=='.'){
            n_lines++;
        }
    }
    //print out words in lexicographical order
    cout<<"Words in Sorted manner:\n";
    for(int j=0;j<i;j++){
       cout<<*ptr_words[j]<<" ";
    }
    cout<<endl;
    //print out number of char,words and lines
    cout<<"\nNumber of characters: "<<n_characters;
    cout<<"\nNumber of words: "<<i;  //i represent word count
    cout<<"\nNumber of lines: "<<n_lines;
    file.close();  //file object closed
    return 0;
}