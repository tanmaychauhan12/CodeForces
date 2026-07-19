#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    if(n==2){
        cout << "Yes\n";
        return;
    }
    unordered_map<int,int> freq;
    for(int &it : nums) freq[it]++;
    if(freq.size()>2){
        cout << "No\n";
        return;
    }
    if(freq.size()==1){
        cout << "Yes\n";
        return;
    }
    int idx = 0;
    for(int i=1;i<n;i++){
        if(nums[0] != nums[i]){
            idx = nums[i];
            break;
        }
    }
    if(n%2!=0 && abs(freq[nums[0]]-freq[idx])==1){
        cout << "Yes\n";
    }else if(n%2==0 && freq[nums[0]]==freq[idx]){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}