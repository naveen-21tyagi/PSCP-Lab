//862041_Naveen Kumar Tyagi
#include<iostream>
using namespace std;

int main (){
	char ch;   //declaration of variable ch with datatype character
	cout<<"Enter any character:";
	cin>>ch; //store entered value in ch
     
     //if statement to tell entered character is a special symbol
    if ((ch>0 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 && ch<=127)){
		cout<<"\nCharacter is a special symbol";
		}

    // else if statement to tell entered Character is a digit
    else if (ch>=48 && ch<=57){
		cout<<"\nCharacter is a digit"; 
    }

    // else if statement to tell entered Character is a capital letter
	else if (ch>=65 && ch<=90){
		cout<<"\nCharacter is a capital letter";
	}

    // else if statement to tell entered Character is a small letter
	else if (ch>=97 && ch<=122){
		cout<<"\nCharacter is a small letter";
	}
        
	return 0;
}
