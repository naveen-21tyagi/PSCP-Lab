#include<iostream>
using namespace std;
int main(){
    int no_RAC,r2,k3;
    int all_brth[73];
    for(int i=1;i<=72;i++){
        if((i)%8==7){
            all_brth[i]=0;
        }
        else{
            all_brth[i]=i;
        }
    }

int RAC[19]={0};
    cout<<"Enter the input of RAC passengers in the bogie: ";
    cin>>no_RAC;
    for(int i=1;i<=no_RAC;i++){
        RAC[i]=200+i;
    }
    r2=(18-no_RAC)/2;
    for(int j=72;j>=1;j--){
        if(r2!=0){
            if(all_brth[j]==0){
                all_brth[j]=j;
                r2=r2-1;
            }
        }
    }
    cout<<endl;
    int t=1;
    for(int i=1;i<=72;i++){
        cout<<"\t"<<all_brth[i];
        if(i==8*t){
            cout<<"\n";
            t++;
        }
    }
    int RAC_no_absent;
    cout<<"Enter the RAC numbers of passengers not reported: ";
    cin>>RAC_no_absent;
    int RAC_absent[RAC_no_absent];
    cout<<"Enter the RAC nos not reported\n";
    for(int i=1;i<=RAC_no_absent;i++){
        int k;
        cin>>k3; // RAC number not reported
        RAC[k3]=1000;
    }

//for rule2 and rule3
    int RAC_only[18]={0};
    int i,j=1,k;
    k3=0;
    for(int i=1;i<=18;i=i+2){
        if(RAC[i]==1000 && RAC[i+1]!=1000 && RAC[i+1]!=1) //case-1{
            k=8*j-1;
            all_brth[k]=RAC[i+1];
            RAC[i+1]=1;
        }
        if(RAC[i]!=1000 && RAC[i+1]==1000 && RAC[i]!=1) //case-2{
            k=8*j-1;
            all_brth[k]=RAC[i];
            RAC[i]=1;
        }
        if(RAC[i]==1000 && RAC[i+1]==1000 ) 
            RAC_only[k3]=i+200;
            RAC_only[k3+1]=i+1+200;
            k3=k3+2;
        }
        j++;
    }
    int j=0,f1,f2;

    for(int i=1;i<=18;i=i+2){
        if(RAC[i]!=1000 && RAC[i+1]!=1000 && RAC[i]!=1 &&RAC[i+1]!=1){
            if(RAC_only[j]!=0){
                f1=RAC_only[j]-200;
                f2=(f1+1)/2;
                k=8*f2-1;
                all_brth[k]=RAC[i+1];
                RAC[i+1]=1;
                f1=i;
                f2=(f1+1)/2;
                k=8*f2-1;
                all_brth[k]=RAC[i];
                RAC[i]=1;
                j=j+2;
            }
        }
    }
    //rule 1
    int no_cnfm_brth_absent;
    cout<<"\nEnter number of passengers with confirmed berths but not reported\n";
    cin>>no_cnfm_brth_absent;
    cout<<"Enter berth numbers not reported\n";

    int brth_of_absents[63]={0};
    for(int i=0;i<no_cnfm_brth_absent;i++){
        cin>>brth_of_absents[i]; //{4,12}
    }
    j=0;
    for(int i=1;i<=72;i++){
        if(brth_of_absents[j]==i){
            all_brth[i]=500;
            j=j+1;
        }
    }
   
    return 0;
}