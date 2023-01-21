#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n,ans=0;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end());
	if(a[0]==a[n-1]){
		cout<<"-1"<<endl;
		return
	}
	for(int i=0;i<n;i++)
		ans=__gcd(ans,a[i]-a[0]);
	cout<<ans;
}


0 1 2 3 4 5
1 5 3 1 1 5
6
1 1 1 3 5 5 
n=2(gcd)
3-2=1
5-2-2=1
5-2-2=1

2 4 4 


2 2 2 2 5

