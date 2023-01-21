#include<bits/stdc++.h>
using namespace std;

int np=0,p[1000];
int n,k,i,j;

int main(){
	cin>>n>>k;
	for(i=2;i<n;i++){
		for(j=2;j<n;j++){
			if(i%j==0) break;
		}
		if(i==j) 
		p[np++]=i;
	}
	for(j=1;j<np;j++){
		for(i=1;i<np;i++){
				if(p[j]+p[j+1]+1==p[i]){
					k--;
				} 
		}
	}
	if(k<=0) cout<<"YES";
	else cout<<"NO";
	return 0;
}

j=1(2)
i=1(2)
2+3+1=6



27 2
[2,3,5,7,11,13,17,19,23]
np=9