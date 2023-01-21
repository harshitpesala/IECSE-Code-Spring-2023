#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int l;
    cin >> l;

    vector<int>nums(l);

    for(int i = 0; i < l; i++)
        cin >> nums[i];
    
    int count = 0;
    vector<int>result;
    for(int i = 0; i < l-1; i++){
        result.push_back(nums[i]);
        
        if(gcd(nums[i], nums[i+1]) != 1){   //C++17 required for inbuilt gcd function
            count++;
            result.push_back(1);
        }
    }

    result.push_back(nums[l-1]);
    
    cout << count << '\n';
    for(int x:result)
        cout << x << ' ';

}