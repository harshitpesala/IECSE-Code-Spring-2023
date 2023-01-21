#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n,0);
        long long int ans =0;
        unordered_map<int,int> m; 
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]-i]++;
        }
        for(auto k: m)
        {
           long long int x = k.second;
            ans = ans + (x*(x-1))/2;
        }
        cout<<ans<<endl;
    }
    
}