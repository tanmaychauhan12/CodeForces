#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int minVal = INT_MAX;
    for(int i=0;i<n;i++){
        minVal = min(minVal, abs(nums[i]));
    }
    cout << minVal;
    return 0;
}