#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int i;
    for(i=1;i<n;i++){
        if(nums[i-1] > nums[i]){
            break;
        }
    }
    if(i==n){
        cout << "YES" << "\n";
        return;
    }
    if(k==1 || k==0) cout << "NO" << "\n";
    else cout << "YES" << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}