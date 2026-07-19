#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin >> n >> x;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int maxVal = max(nums[0], x-nums[n-1]);
    for(int i=1;i<n;i++){
        if(maxVal < nums[i]-nums[i-1]){
            maxVal = nums[i]-nums[i-1];
        }
    }
    int lastStop = x-nums[n-1];
    if(maxVal - lastStop < lastStop){
        maxVal += lastStop - (maxVal - lastStop);
    }
    cout << maxVal << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}