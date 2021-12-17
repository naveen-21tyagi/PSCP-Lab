//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    //declaration of required character arrays
    char input_string[30],lower_case[30], upper_case[30];
    cout<<"Enter a string: ";
    gets(input_string); //store entered string in input_string(char array)

    //converting into lower case and upper case
    int i=0;
    while(input_string[i]!='\0'){
        //if char is Capital then
        //store its small form in lower_case array
        //store as it is in upper_case array
        if(input_string[i]>='A'&&input_string[i]<='Z'){
            lower_case[i]=input_string[i]+32;
            upper_case[i]=input_string[i];
            i++;
        }
        //if char is small then
        //store as it is in lower_case array
        //store its capital form in upper_case array
        else if(input_string[i]>='a'&&input_string[i]<='z'){
            lower_case[i]=input_string[i];
            upper_case[i]=input_string[i]-32;
            i++;
        }
        //store spaces in both lower_case and upper_case array 
        else if(input_string[i]==' '){
            lower_case[i]=input_string[i];
            upper_case[i]=input_string[i];
            i++;
        }
    }
    //put null character at the end 
    //of both lower_case and upper_case
    if(input_string[i]=='\0'){
        lower_case[i]='\0';
        upper_case[i]='\0';
    }

    //prints entered string in lowercase
    cout<<"\nString in lowercase: "<<lower_case;
    //prints entered string in uppercase
    cout<<"\nString in uppercase: "<<upper_case;
    return 0;
}