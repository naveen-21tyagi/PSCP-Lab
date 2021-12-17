//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
#include<cstring>
using namespace std;

//function to take names form user
void names_input(string names[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter name: ";
        getline(cin,names[i]);
    }
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    int n;  //variable to store number of names
    cout<<"Enter number of names: ";
    cin>>n;
    string names[n];  //string array to store names

    //cin.ignore() will clear characters from input buffer
    //so that getline() will function properly
    cin.ignore();   
    //call of function to take desired number of names  
    names_input(names,n);
    //creating an pointer array
    //pointing to names
    string *ptr_names[n];
    for(int i=0;i<n;i++){
        ptr_names[i]=&names[i];
    }
    //sorting (insertion sort) of address in pointer array
    //on the basis of names they are pointing 
    //below code will sort in lexicographical order
    for(int i=0;i<3;i++){
        int loc=i;
        string min=*ptr_names[i];
        for(int j=i;j<4;j++){
            //strcmp is predifined
            //it compares string char by char
            //to do so, it needs character array
            //so c_str() is used 
            //it converts string to char array
            int res=strcmp(min.c_str(),(*ptr_names[j]).c_str());
            if(res>0){
                min=*ptr_names[j];
                loc=j;
            }
        }
        //swapping the addresses
        string *temp=ptr_names[i];
        ptr_names[i]=ptr_names[loc];
        ptr_names[loc]=temp;
    }

    //print the given input in given order
    cout<<"Original Input(in given order): ";
    for(int i=0;i<n;i++){
        cout<<names[i]<<" ";
    }
    cout<<endl;
    //print the given input in lexicographical order
    cout<<"Names in lexicographical order: ";
    for(int i=0;i<n;i++){
        cout<<*ptr_names[i]<<" ";
    }
    return 0;
}