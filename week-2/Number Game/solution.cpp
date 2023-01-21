#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--){
        long long x, y;
        cin >> x >> y;

        if(x >= y*y && x%2 == y%2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}