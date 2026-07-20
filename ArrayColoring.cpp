#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int paritySum = 0;
    for(int i=0;i<n;i++){
        paritySum += nums[i];
        sum -= nums[i];
        if(paritySum % 2 == 0 && sum % 2 == 0){
            cout << "YES\n";
            return;
        }
        if(paritySum % 2 != 0 && sum % 2 != 0){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}