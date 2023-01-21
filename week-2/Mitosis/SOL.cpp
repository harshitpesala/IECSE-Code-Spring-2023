#include <bits/stdc++.h>
using namespace std;
int c,n;
main(){
	cin >> n;
	while(n){
		n &= n-1;
		c++;
	}
	cout << c;
}

//aliter
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	bitset<64> ar=x;
	cout<<ar.count()<<endl;
}


5*2 = 1010

10110

10000+100+10