#include<iostream>
using namespace std;
float max(float r,float g,float b){
    if(r>=g && r>=b){
        return r;
    }
    else if(g>b && g>r){
        return g;
    }
    return b;
}
void rgb_cmyk(float r,float g,float b){
    float c,m,y,k,R,G,B;
    R=r/255;
    G=g/255;
    B=b/255;
    float w=max(R,G,B);
    cout<<w;
    k=1-w;
    
    if(r==0 && g==0 && b==0){
        c=0;
        m=0;
        y=0;
        cout<<"\nThe value of Cyan is : "<<c;
        cout<<"\nThe value of Magenta is : "<<m;
        cout<<"\nThe value of Yellow is : "<<y;
        cout<<"\nThe value of black is : "<<k;
    }
    else{
        // float res=(.333333-(b/255))/0.333333;
        // cout<<'\n'<<res;
        c=(w-R)/w;
        m=(w-G)/w;
        y=(w-B)/w;
        cout<<"\nThe value of Cyan is : "<<c;
        cout<<"\nThe value of Magenta is : "<<m;
        cout<<"\nThe value of Yellow is : "<<y;
        cout<<"\nThe value of black is : "<<k;
    }
}

int main(){
    float r,g,b;
    cin>>r>>g>>b;
    rgb_cmyk(r,g,b);
    return 0;
}