#include<bits/stdc++.h>
using namespace std ;  
 int solve(int n, int arr[7]) {
    int i = 0;
    while (n > 0) {
        n -= arr[i];
        if (n <= 0) {
            return i + 1; // Days are 1-based: Monday = 1, ..., Sunday = 7
        }
        i = (i + 1) % 7;
    }
    return -1; // This line is just for safety, it will never be executed.
}

int main()
{
    int n ; 
    int arr[7]; 
    cin>>n ;
    
    for(int i = 0 ; i < 7; i++){
        cin>>arr[i]; 
    }
    cout<<solve(n,arr); 




    

    return 0 ; 
}