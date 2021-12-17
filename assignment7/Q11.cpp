//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int len=0;//to store length of string

//recursive function to get length of string 
int str_len(char string[30],int len){
    //increase len one and call itself to do same  
    //untill null character encountered
    if(string[len]!='\0'){
        len++;
        return str_len(string,len);
    }
    //store value of local len in global len
    ::len=len; 
    return len; 
}
//recursive function to check whether string is palindrome is or not 
//it check first char with last char
//if not match then it exit printing out 'not palindrome'
//or if it matches then it call itself 
//and then check second with second last
//this will continue till middle char(if all matches) 
//then it is palindrome 
string palindrome_checker(char string[30],int index,int mid,int len){
    if(index<mid){
        if(string[index]==string[(len-1)-index]){
            index++; //increase index to check next in recursive call
            return palindrome_checker(string,index,mid,len);
        }
    }
    //if all matches then index will be equal to mid
    if(index==mid){
        return "\nString is palindrome.";
    }
    return "\nString is not palindrome.";
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    char input_string[30];
    cout<<"Enter string: ";
    gets(input_string); //store entered string in input_string char array

    //printing the length of string by calling str_len function
    cout<<"Length of String: "<<str_len(input_string,len);
    int mid=len/2;  //index of middle character

    //calling function palindome_checker 
    //and printing whether entered string is palindrome or not
    cout<<palindrome_checker(input_string,0,mid,len);
    return 0;
}