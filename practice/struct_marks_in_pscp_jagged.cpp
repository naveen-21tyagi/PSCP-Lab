#include<iostream>
using namespace std;
struct pscp{
    int rollno;
    char sec;
    int marks_in_pscp;
};
int maxm(int arr[],int n){
    //int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    pscp *a[rows];
    int columns[rows];
    for(int i=0; i<rows; i++){
        cout<<"Enter number of columns in "<<i+1<<" row: ";
        cin>>columns[i];
        a[i]=new pscp[columns[i]];
    }

    //take input
    for(int i=0;i<rows;i++){
        cout<<"Give input for "<<i+1<<" row.\n";
        for(int j=0; j<columns[i]; j++){
            cout<<"Enter roll no: ";
            cin>>a[i][j].rollno;
            cout<<"Enter Section: ";
            cin>>a[i][j].sec;
            cout<<"Enter marks in pscp: ";
            cin>>a[i][j].marks_in_pscp;
        }
    }
    //displaying marks
    cout<<"-------Marks-------\n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns[i]; j++){
            cout<<a[i][j].rollno<<" ";
            cout<<a[i][j].sec<<" ";
            cout<<a[i][j].marks_in_pscp<<"\t";
        }
        cout<<endl;
    }

    //sorting
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns[i]-1;j++){
            int loc=j;
            int min_marks=a[i][j].marks_in_pscp;
            for(int k=j;k<columns[i];k++){
                if(min_marks>a[i][k].marks_in_pscp){
                    min_marks=a[i][k].marks_in_pscp;
                    loc=k;
                }
            }
            //swapping
            swap(a[i][j].rollno,a[i][loc].rollno);
            swap(a[i][j].sec,a[i][loc].sec);
            swap(a[i][j].marks_in_pscp,a[i][loc].marks_in_pscp);
        }
    }
    //displaying marks after sorting
    cout<<"After sorting\n"
        <<"-------Marks-------\n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns[i]; j++){
            cout<<a[i][j].rollno<<" ";
            cout<<a[i][j].sec<<" ";
            cout<<a[i][j].marks_in_pscp<<"\t";
        }
        cout<<endl;
    }
    //sorting a jagged matrix
    //number of row is certain
    //can not be different for different columns i think
    //so we have to create square matrix or recatangular 
    //then do transpose
    //but on printing, elements with garbage value will also be printed
    //so i think to print directly in transposed manner
    //may be this is also not possible 
    //we will initialise the rectangular matrix with 0
    //then store in this matrix in transposed manner
    //later we made loop to neglect that elements with zero enteries
    //and print just spaces


    int tr_rows=maxm(columns,rows);
    pscp *b[tr_rows];        //b=tr(a)
    for(int i=0;i<tr_rows;i++){
        b[i]= new pscp[rows];
    } 
    //initialsing with zero
    for(int i=0;i<tr_rows;i++){
        for(int j=0; j<rows; j++){
            b[i][j].rollno=0;
            b[i][j].sec=0;
            b[i][j].marks_in_pscp=0;
        }
    }
    //storing in transpose manner
    for(int i=0;i<tr_rows;i++){
        for(int j=0; j<rows; j++){
            if(i+1>columns[j]){
                continue;
            }
            b[i][j].rollno=a[j][i].rollno;
            b[i][j].sec=a[j][i].sec;
            b[i][j].marks_in_pscp=a[j][i].marks_in_pscp;
        }
    }
    //printing transpose
    cout<<"Transpose\n"
        <<"-------Marks-------\n";
    for(int i=0; i<tr_rows; i++){
        for(int j=0; j<rows; j++){
            if(b[i][j].rollno==0){
                cout<<" "
                    <<" "
                    <<" "
                    <<" "
                    <<" "
                    <<"\t";
                    continue;
            }
            cout<<b[i][j].rollno<<" ";
            cout<<b[i][j].sec<<" ";
            cout<<b[i][j].marks_in_pscp<<"\t";
        }
        cout<<endl;
    }
    return 0;
}