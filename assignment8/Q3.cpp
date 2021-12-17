//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
#include<fstream>
using namespace std;
//function to count lines
//that do not start with A
int no_line_notA(ifstream& file){
    int count=0;  //variable to store count
    char line[100];  //array to store line
    while(file.getline(line,100)){
        if(line[0]!='A'){  //counter 'if' statement
            count++;
        }
    }
    return count;  //return count(required no. of lines)
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    ifstream file("STORY.txt"); //file object intialization
    //printing out result by calling no_line_notA function
    cout<<"Number of lines which are not starting with \'A\': "<<no_line_notA(file);
    return 0;
}