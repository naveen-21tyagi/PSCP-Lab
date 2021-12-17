//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    //variables are declared in the scope in which they are required 


    //to print first pattern 
    int num=6;
    char ch;

    //print first row of first pattern
    //65 is ASCII value of A
    for(int i=65;i<=65+num;i++){      //print A to G
            ch=i;
            cout<<ch;    
        }
    for(int i=65+num-1;i>=65;i--){      //print F to A
            ch=i;
            cout<<ch;
        }
    cout<<endl;

    //print rest of rows of first pattern
    for(int j=1;j<=num;j++){
        for(int i=65;i<=65+num-j;i++){         // this print A...
            ch=i;
            cout<<ch; 
        }
        for(int space=1;space<=2*j-1;space++){   //this is for space 
            cout<<" ";
        }
        for(int i=65+num-j;i>=65;i--){          //this print in reverse
            ch=i;
            cout<<ch;
        }
        cout<<endl;
    }
    cout<<endl;



    //to print second pattern 
    int row1=5;
    //for upper half of the second pattern
    for(int i=0;i<row1;i++){
        int value=1;
        for(int space=row1;space>=i;space--){         //for printing required space before each row
        cout<<"  ";
        }
        for(int j=0;j<=i;j++){                        //for printing values 
            cout<<"  "<<value<<" ";
            value=value*(i-j)/(j+1);
        }
        cout<<endl;
    }
    //for lower half of the second pattern
    for(int i=row1-2;i>=0;i--){
        int value=1;
        for(int space=i;space<=5;space++){           //for printing required space before each row
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){                       //for printing values
            cout<<"  "<<value<<" ";
            value=value*(i-j)/(j+1);
        }
        cout<<endl;
    }
    cout<<endl;



    //to print third pattern 
    int row2=5;
    //for upper half of the third pattern
    for(int i=1;i<row2;i++){
        for(int space=i;space<row2;space++){          //for printing required space before each row
            cout<<"   ";
        }
        for(int star=1;star<=2*i-1;star++){           //for printing star
            cout<<" * ";
        }
        cout<<endl;
    }
    //for lower half of the third pattern
    for(int i=row2-2;i>0;i--){
        for(int space=i;space<row2;space++){          //for printing required space before each row
            cout<<"   ";
        }
        for(int star=2*i-1;star>0;star--){            //for printing star
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}