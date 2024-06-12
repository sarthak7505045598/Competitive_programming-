#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n ; 
    cin>>n ; 
    int a[n]; 
    for(int i = 0 ; i< n ; i++)cin>>a[i] ; 

    unordered_map<int,int>mp ; 
    for(auto it : a )mp[it]++; 
    vector<int>ans ; 
    for(auto it : mp)
    {
        ans.push_back(it.second); 
    }
    sort(ans.begin(),ans.end()); 
    reverse(ans.begin(),ans.end()) ; 
    int ans1 = ans[0]; 
    int ans2= mp.size(); 
    cout<<ans1<<" "<<ans2; 
    
    return 0 ; 
}