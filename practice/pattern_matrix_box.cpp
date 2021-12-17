#include<iostream>
using namespace std;
void square_p(int *arr,int num,int n,int size){
    int h=n/2,g=n/2;  //centre
    for(int i=h-size; i<h+size+1; i++){
        for(int j=g-size; j<g+size+1; j++){
            *(arr + i*n +j)=num;
        }
    }
}
void diamond_p(int *arr,int num,int n,int size){
    int h=n/2,g=n/2;  //centre
    int k=0,i,j;
    for(i=h-size;i<h+1;i++){
        for(j=g-k;j<g+1+k;j++){
            *(arr + i*n + j)=num;
        }
        k++;
    }
    k=k-2;
    for(i=i;i<h+size+1;i++){
        for(j=g-k;j<g+1+k;j++){
            *(arr + i*n + j)=num;
        }
        k--;
    }
}
void triangle_p(int *arr,int num,int n,int size){
    int h=n/2,g=n/2;  //centre
    int k=0;
    for(int i=h-size;i<h+size+1;i++){
        for(int j=g-k;j<g+1+k;j++){
            *(arr + i*n + j)=num;
        }
        k++;
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        fill_n(arr[i],n,1);
    }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // enum shape{square,diamond,triangle};
    // shape shp=square;
    string shape;
    cout<<"enter shape: ";
    cin>>shape;
    int num,size;
    cout<<"num: ";
    cin>>num;
    cout<<"size: ";
    cin>>size;
    // switch(shp){
    //     case square:
    if(shape=="square"){
        square_p((int*)arr,num,n,size);
    }
    else if(shape=="diamond"){
        diamond_p((int*)arr,num,n,size);
    }
    else if(shape=="triangle"){
        triangle_p((int*)arr,num,n,size);
    }
    //else if(shape==)
        // break;
        // case diamond:
        // diamond(arr,num,n,size);
        // break;
        // case triangle:
        // triangle(arr,num,n,size);
        // break;
    // }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}