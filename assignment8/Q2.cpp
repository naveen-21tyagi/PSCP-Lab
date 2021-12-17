//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
#include<fstream>  //header file for performing operations on files
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    ifstream file1; //file1 object to read a file
    file1.open("IN.txt");
    ofstream file2; //file2 object to write a file
    file2.open("OUT.txt");

    // variables to store number of alphabets, digits and special character
    int n_alphabets=0,n_digits=0,n_special_char=0;

    //variable to store a character
    //here its purpose to give true value
    //so that while loop continue to run
    //until character get stored in it
    //if we use eof() function in while loop condition
    //then last character will be read by two times
    char ch; 
    while(file1>>ch){
        if( ( (ch>=65) && (ch<=90) )|| ( (ch>=97) && (ch<=122) ) ){
            n_alphabets++; //count of alphabets is increased by one
                           //if an alphabet encounter
        }
        else if( (ch>=48) && (ch<=57) ){
            n_digits++;   //count of digit is increased by one
                          //if an numerical digit encounter
        }               
        else if( (ch<48) || (ch>57 && ch<65) || (ch>90 && ch<97) || (ch>122)){
            n_special_char++;  //count of special character is increased by one
                               // if a special character encounter
        }
    }
    //printing out result in console
    cout<<"Number of alphabets: "<<n_alphabets<<'\n';
    cout<<"Number of digits: "<<n_digits<<'\n';
    cout<<"Number of special characters: "<<n_special_char<<'\n';
    //storing result in file
    file2 <<"Number of alphabets: "<<n_alphabets<<'\n';
    file2 <<"Number of digits: "<<n_digits<<'\n';
    file2 <<"Number of special characters: "<<n_special_char<<'\n';
    //close file object 
    file1.close(); 
    file2.close();
    return 0;
}