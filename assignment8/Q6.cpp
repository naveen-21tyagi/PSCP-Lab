//862041_Naveen Kumar Tyagi_862041
#include<iostream>
using namespace std;
//required structure
struct Student{
    string name; 
    int rollno;
    int m_history;  //for history marks
    int m_maths;     //for maths marks
    int m_physics;  //for physics marks
    int t_marks;    // for total marks
};
//function to get highest marks in subjects and highest total
void highest_marks(struct Student Student[]){
    //to store highest marks in history and rollno of student who scored
    //assuming first student has scored highest marks
    int highest_history=Student[0].m_history, rollno_history=Student[0].rollno;

    //to store highest marks in maths and rollno of student who scored
    //assuming first student has scored highest marks
    int highest_maths=Student[0].m_maths, rollno_maths=Student[0].rollno;

    //to store highest marks in physics and rollno of student who scored
    //assuming first student has scored highest marks
    int highest_physics=Student[0].m_physics, rollno_physics=Student[0].rollno;

    //to store highest total marks and name of student who scored
    //assuming first student has scored highest marks
    int highest_total=Student[0].t_marks;
    string highest_name=Student[0].name;
    
    //for loop to for comparison and storing highest marks
    for(int i=1; i<10; i++){
        //for history
        if(highest_history<=Student[i].m_history){
            highest_history=Student[i].m_history;
            rollno_history=Student[i].rollno;
        }
        //for maths
        if(highest_maths<=Student[i].m_maths){
            highest_maths=Student[i].m_maths;
            rollno_maths=Student[i].rollno;
        }
        //for physics
        if(highest_physics<=Student[i].m_physics){
            highest_physics=Student[i].m_physics;
            rollno_physics=Student[i].rollno;
        }
        //for total
        if(highest_total<=Student[i].t_marks){
            highest_total=Student[i].t_marks;
            highest_name=Student[i].name;
        }
    }

    //cout statements to print out highest marks
    //in history
    cout<<"\nHighest marks in History: "<<highest_history;
    cout<<"\nRollno of student who secured highest marks in History: "<<rollno_history<<'\n';
    //in maths
    cout<<"\nHighest marks in Mathamtics: "<<highest_maths;
    cout<<"\nRollno of student who secured highest marks in Mathematics: "<<rollno_maths<<'\n';
    //in physics
    cout<<"\nHighest marks in Physics: "<<highest_physics;
    cout<<"\nRollno of student who secured highest marks in Physics: "<<rollno_physics<<'\n';
    //total
    cout<<"\nHighest total marks: "<<highest_total;
    cout<<"\nRollno of student who secured highest total: "<<highest_name<<'\n';
}

int main(){
    cout<<"862041_Naveen Kumar Tyagi_862041\n";
    struct Student Student[10];  //structure array
    //for loop to student marks and name from user 
    for(int i=0; i<10; i++){
        cout<<"Student "<<i+1<<'\n';
        cout<<"Name: ";
        getline(cin,Student[i].name); //for name
        cout<<"Rollno: ";
        cin>>Student[i].rollno;       //for roll no
        cout<<"Marks in History: ";
        cin>>Student[i].m_history;    //for history
        cout<<"Marks in Maths: ";
        cin>>Student[i].m_maths;      //for maths
        cout<<"Marks in Physics: ";
        cin>>Student[i].m_physics;     //for physics
        //for evaluation for total marks
        Student[i].t_marks=Student[i].m_history + Student[i].m_maths + Student[i].m_physics;
        cin.ignore(); //clear input buffer
    }
    //for loop to print out name and total marks of student s
    cout<<"  \tName\t\t\tTotal Marks\n\n";
    for(int i=0; i<10; i++){
        cout<<i+1<<".\t"<<Student[i].name<<"\t\t\t"<<Student[i].t_marks<<"\n";
    }
    //calling of function to print out highest marks in subject and highest total
    highest_marks(Student);
    return 0;
}