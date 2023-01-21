#include <bits/stdc++.h>
#define ll long long int
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
  ll t ; cin>>t;
  while(t--){
ll n ; cin>>n ;
map<ll , ll>mp;
for(int i=0 ; i<n ; i++){
    ll x; cin>>x;
    ll c=0;
    while(x%2==0){
        c++;
        x=x/2;
    }
    mp[x]=max(mp[x] , c);
}
ll sum=0;
for(auto it: mp){
    sum+=it.second;
}
cout<<sum<<endl;
}
}