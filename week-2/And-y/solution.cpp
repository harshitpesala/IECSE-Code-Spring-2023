#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--){
        int x;
        cin >> x;
        
        int count = 0;
        while(x){
            count++;
            x >>= 1;
        }

        int y = (1 << (count - 1)) - 1;
        cout << y << '\n';
    }
}
