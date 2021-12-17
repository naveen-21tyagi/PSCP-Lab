#include<iostream>
using namespace std;
struct student{
    int rollno;
    char name[20];
    float marks;
};
int main(){
    cout<<"Naveen Kumar Tyagi_862041_Section F\n";
    // int rows;  
    // cout<<"Enter no. rows: ";
    // cin>>rows;
    int n[5];//n[i] = number os students in a ith row
    for(int i=0;i<5;i++){
        cout<<"\n\nenter number of students in row: ";
        cin>>n[i];
    }
    struct student students1[n[0]];
    struct student students2[n[1]];
    struct student students3[n[2]];
    struct student students4[n[3]];
    struct student students5[n[4]];


    int j=0; // for storing input in structures
    //taking input for students1

    for(int i=0;i<n[j];i++){
    cout<<"enter student details as rollno ,name and marks.\n";
        cin>>students1[i].rollno;
        cin>> students1[i].name;
        cin>> students1[i].marks;
    }
     //taking input for students2
    j++;
    for(int i=0;i<n[j];i++){
    cout<<"enter student details as rollno ,name and marks.\n";
        cin>>students2[i].rollno;
        cin>> students2[i].name;
        cin>> students2[i].marks;
    }
    //taking input for students3
    j++;
    for(int i=0;i<n[j];i++){
    cout<<"enter student details as rollno ,name and marks.\n";
        cin>>students3[i].rollno;
        cin>> students3[i].name;
        cin>> students3[i].marks;
    }
    j++;
    //taking input for students4

    for(int i=0;i<n[j];i++){
    cout<<"enter student details as rollno ,name and marks.\n";
        cin>>students4[i].rollno;
        cin>> students4[i].name;
        cin>> students4[i].marks;
    }
    //taking input for students5
    j++;
    for(int i=0;i<n[i];i++){
    cout<<"enter student details as rollno ,name and marks.\n";
        cin>>students5[i].rollno;
        cin>> students5[i].name;
        cin>> students5[i].marks;
    }
    j=0;

    cout<<"Students:\n";
    //printing the structures

    //students1
    for(int i=0;i<n[j];i++){
        cout<<students1[i].rollno<<'\t';
        cout<<students1[i].name<<'\t';
        cout<<students1[i].marks<<'\t';
    }
    cout<<endl;
    j++;
    //students2
    for(int i=0;i<n[j];i++){
        cout<<students2[i].rollno<<'\t';
        cout<<students2[i].name<<'\t';
        cout<<students2[i].marks<<'\t';
    }
    cout<<endl;
j++;
    //students3
    for(int i=0;i<n[j];i++){
        cout<<students3[i].rollno<<'\t';
        cout<<students3[i].name<<'\t';
        cout<<students3[i].marks<<'\t';
    }
    cout<<endl;
j++;
    //students4
    for(int i=0;i<n[j];i++){
        cout<<students4[i].rollno<<'\t';
        cout<<students4[i].name<<'\t';
        cout<<students4[i].marks<<'\t';
    }
    cout<<endl;
j++;
    //students5
    for(int i=0;i<n[j];i++){
        cout<<students5[i].rollno<<'\t';
        cout<<students5[i].name<<'\t';
        cout<<students5[i].marks<<'\t';
    }
    cout<<endl;
    j=0;
    // sorting on the basis of marks
    //students1
    for(int i=0;i<n[j]-1;i++){
        int loc=i;
        int min=students1[i].marks
        for(int k=i;k<n[j];k++){
            if(students1[i].marks>students1[k].marks){
                min=students1[k].marks;
                loc=k;
            }
        }
        //swapping
        int temp_rollno=students1[i].rollno;
        char temp_name[20]=students1[i].name;
        float temp_marks=students1[i].marks;
        students1[i].rollno=students1[loc].rollno;
        students1[i].name=students1[loc].name;
        students1[i].marks=students1[loc].marks;
        students1[loc].rollno=temp_rollno;
        students1[loc].name=temp_name;
        students1[loc].marks=temp_marks;
    }
j++;
    //students2
    for(int i=0;i<n[j]-1;i++){
        int loc=i;
        int min=students2[i].marks
        for(int k=i;k<n[j];k++){
            if(student2[i].marks>student2[k].marks){
                min=students2[k].marks;
                loc=k;
            }
        }
        //swapping
        int temp_rollno=students2[i].rollno;
        char temp_name[20]=students2[i].name;
        float temp_marks=students2[i].marks;
        students2[i].rollno=students2[loc].rollno;
        students2[i].name=students2[loc].name;
        students2[i].marks=students2[loc].marks;
        students2[loc].rollno=temp_rollno;
        students2[loc].name=temp_name;
        students2[loc].marks=temp_marks;
    }
    j++;
    //students3
    for(int i=0;i<n[j]-1;i++){
        int loc=i;
        int min=students3[i].marks
        for(int k=i;k<n[j];k++){
            if(student3[i].marks>student3[k].marks){
                min=students3[k].marks;
                loc=k;
            }
        }
        //swapping
        int temp_rollno=students3[i].rollno;
        char temp_name[20]=students3[i].name;
        float temp_marks=students3[i].marks;
        students3[i].rollno=students3[loc].rollno;
        students3[i].name=students3[loc].name;
        students3[i].marks=students3[loc].marks;
        students3[loc].rollno=temp_rollno;
        students3[loc].name=temp_name;
        students3[loc].marks=temp_marks;
    }
    j++;
    //students4
    for(int i=0;i<n[j]-1;i++){
        int loc=i;
        int min=students4[i].marks
        for(int k=i;k<n[j];k++){
            if(student4[i].marks>student4[k].marks){
                min=students4[k].marks;
                loc=k;
            }
        }
        //swapping
        int temp_rollno=students4[i].rollno;
        char temp_name[20]=students4[i].name;
        float temp_marks=students4[i].marks;
        students4[i].rollno=students4[loc].rollno;
        students4[i].name=students4[loc].name;
        students4[i].marks=students4[loc].marks;
        students4[loc].rollno=temp_rollno;
        students4[loc].name=temp_name;
        students4[loc].marks=temp_marks;
    }
    j++;
    //students5
    for(int i=0;i<n[j]-1;i++){
        int loc=i;
        int min=students5[i].marks
        for(int k=i;k<n[j];k++){
            if(student5[i].marks>student5[k].marks){
                min=students5[k].marks;
                loc=k;
            }
        }
        //swapping
        int temp_rollno=students5[i].rollno;
        char temp_name[20]=students5[i].name;
        float temp_marks=students5[i].marks;
        students5[i].rollno=students5[loc].rollno;
        students5[i].name=students5[loc].name;
        students5[i].marks=students5[loc].marks;
        students5[loc].rollno=temp_rollno;
        students5[loc].name=temp_name;
        students5[loc].marks=temp_marks;
    }

    cout<<endl<<endl<<endl;
    cout<<"Students: (in sorted acc. to marks)\n";
    j=0;

    //printing the structures

    //students1
    for(int i=0;i<n[j];i++){
        cout<<students1[i].rollno<<'\t';
        cout<<students1[i].name<<'\t';
        cout<<students1[i].marks<<'\t';
    }
    cout<<endl;
    j++;
    //students2
    for(int i=0;i<n[j];i++){
        cout<<students2[i].rollno<<'\t';
        cout<<students2[i].name<<'\t';
        cout<<students2[i].marks<<'\t';
    }
    cout<<endl;
j++;
    //students3
    for(int i=0;i<n[j];i++){
        cout<<students3[i].rollno<<'\t';
        cout<<students3[i].name<<'\t';
        cout<<students3[i].marks<<'\t';
    }
    cout<<endl;
j++;
    //students4
    for(int i=0;i<n[j];i++){
        cout<<students4[i].rollno<<'\t';
        cout<<students4[i].name<<'\t';
        cout<<students4[i].marks<<'\t';
    }
    cout<<endl;
j++;
    //students5
    for(int i=0;i<n[j];i++){
        cout<<students5[i].rollno<<'\t';
        cout<<students5[i].name<<'\t';
        cout<<students5[i].marks<<'\t';
    }
    cout<<endl;
    //struct student student1[]
    // struct *students[rows];
    // for(int i=0;i<rows;i++){
    //     cout<<"\n\nenter number of students in row: ";
    //     cin>>n[i];
        
        
    // }
    // for(int i=0;i<rows;i++){
    //     cout<<"\n\nenter number of students in row: ";
    //     cin>>n[i];
    //     students[i]=malloc(28 * n[i]);//4 + 20 + 4 =28
    // }
    

    // //taking input
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<n[i]<j++){
    //         struct *ptr; 
    //         cin>>*(students[i] + j*28).rollno;
    //         cin>>*(students[i] + j*28 +4).name;
    //         cin>>*(students[i] + j*28 + 24).marks;
    //     }
    // }

    return 0;
}