#include<iostream>//include iostream header file
using namespace std; //using std namespace


class person{        //define a class
char name[30];       //variable for name 
int age;             //variable for age


 public:             
 	void getdata();  //funtion to get data
 	void display();  //function to display data

};
 void person::getdata(){
 cout<<"Enter name: ";
 cin>>name;
 cout<<"Enter age: ";
 cin>>age;
}
void person::display(){
	cout<<"\nName: "<<name;
	cout<<"\nAge:  "<<age;
}
int main(){         // main function (execution starts from here.)
	person per;     // defining class variable(known as object.)
	per.getdata();
	per.display();
	return 0;

}