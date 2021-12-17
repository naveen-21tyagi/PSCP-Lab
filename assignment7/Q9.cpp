//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
#include<cstdio>
using namespace std;

//function to get the size of array
int size(char string[]){
    int i=0;
    //increase value of i by 1 until null character encountered
    while(string[i]!='\0'){  
        i++;
    }
    //return i(size) finally
    return i;
}

//this function check the other characters of the substring in string
int checker(char string[],char sub_string[],int size_sub_str,int index){
    for(int i=1;i<size_sub_str;i++){
        if(string[index+i]!=sub_string[i]){
            return -1;  //return -1 if match not found
        }
    }
    return 1; //return 1 if all character matches
}

//this function find the match of first character of substring in string
//if match found then it pass the string, substring and location of match in string
//to checker function which then check other character
int finder(char string[],char sub_string[],int size_in_str,int size_sub_str,int loc[10]){
    int ind=0;//to store number of matches(also used as index to store loc of matches)
    for(int i=0;i<size_in_str;i++){
        if(string[i]==sub_string[0]){ 
            //res variable to store return value of checker function
            int res=checker(string,sub_string,size_sub_str,i); 
            //if complete match found then store location 
            if(res==1){
                loc[ind++]=i+1;
            }
        }
    }
    //return ind, if it is 0 that it can be concluded that no match found
    return ind; 
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    //declaration of arrays to store string and substring
    char input_string[30],sub_string[10];

    int loc[10]; //to store location of matches

    cout<<"Enter string: ";
    gets(input_string); //store entered string in input_string
    //calling size fucntion to get size of string and storing it
    int size_in_str=size(input_string);

    cout<<"Enter substring: ";
    gets(sub_string);  //store entered sub string in sub_string
    //calling size fucntion to get size of substring and storing it
    int size_sub_str=size(sub_string);

    //declaration of variable to store number of matches found
    //call finder function and store its return value
    int no_find=finder(input_string,sub_string,size_in_str,size_sub_str,loc);
    if(no_find==0){
        cout<<"There is no match.";
    }
    //if matches found then print the location of matches
    else{
        cout<<"\nLocations where substring found.\n";
        //print loc of matches
        for(int i=0;i<no_find;i++){
            cout<<loc[i]<<" ";  
        }
    }
    return 0;
}