// C++ program to find the n-th element of  
// Newman-Conway Sequence 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find the n-th element 
int sequence(int n) 
{ 
    // Declare array to store sequence 
    int f[n + 1]; 
    int i; 
    f[0] = 0; 
    f[1] = 1; 
    f[2] = 1; 
  
    for (i = 3; i <= n; i++)  
        f[i] = f[f[i - 1]] + f[i - f[i - 1]];     
  
    return f[n]; 
} 
  
// Driver Program 
int main() 
{ 
    int n ;cin>>n; 
    cout << sequence(n); 
    return 0; 
} 