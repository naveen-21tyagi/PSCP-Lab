//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
 
void towerOfHanoi(int n_disks,char src_rod,char des_rod,char aux_rod) { 
    //move last disk from source rod to destination rod
    if (n_disks == 1){     
        cout<<"Move disk 1 from rod "<<src_rod<<" to rod "<<des_rod<<endl; 
        return; 
    }

    //move n-1 disks  from source rod to auxillary rod
    //considering aux. rod to be destination rod for n-1 disks 
    towerOfHanoi(n_disks - 1,src_rod,aux_rod,des_rod); 
    cout<<"Move disk "<<n_disks<<" from rod "<<src_rod<<" to rod "<<des_rod << endl; 

    //move n-1 disks from auxillary rod to destination rod 
    towerOfHanoi(n_disks - 1,aux_rod,des_rod,src_rod); 
} 
 

int main(){ 
    cout<<"862041_Naveen Kumar Tyagi_Section F";
    int n_disks; // Number of disks 
    cout<<"\nEnter number of disks: ";
    cin>>n_disks;
    //A is source rod
    //B is auxillary rod
    //C is destination rod
    towerOfHanoi(n_disks,'A','C','B'); // A, B and C are names of rods 
    return 0; 
} 
 

