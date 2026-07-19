#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    vector<int> ans;
    ans.push_back(nums[0]);
    for(int i=1;i<n;i++){
        if(nums[i-1] <= nums[i]){
            ans.push_back(nums[i]);
        }else{
            ans.push_back(nums[i]);
            ans.push_back(nums[i]);
        }
    }
    cout << ans.size() << "\n";
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}