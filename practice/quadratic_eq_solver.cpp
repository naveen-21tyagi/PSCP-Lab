#include <iostream>
#include <cmath>
using namespace std;
int main(){
  float a,b,c,discr,sol1,sol2;
  cout<<"This program is to solve quadratic eq. in the form ax^2+bx+c.\n";
  cout<<"Enter a: ";cin>>a;
  cout<<"Enter b: ";cin>>b;
  cout<<"Enter c: ";cin>>c;
  discr=b*b -4*a*c;
  if(a!=0){
    if(discr>=0){
      sol1=(-b+sqrt(discr))/(2*a);
      sol2=(-b-sqrt(discr))/(2*a);
      cout<<"Solutions are "<<sol1<<" "<<sol2;
    }
    else {
      cout<<"Solutions are "
      <<-b/(2*a)<<"+"<<sqrt(-discr)/(2*a)<<"i  " //sol1
      <<-b/(2*a)<<"-"<<sqrt(-discr)/(2*a)<<"i";  //sol2
    }
    
  }
  else{
    cout<<"This is not a quadratic equation."<<endl;
    cout<<"x= "<<(-c)/b;
  }
    
  return 0;

}
