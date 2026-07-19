#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n-1);
    for(int i=0;i<n-1;i++){
        cin >> nums[i];
    }
    int ans = 0;
    for(int i=0;i<n-1;i++){
        ans = ans - nums[i];
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}