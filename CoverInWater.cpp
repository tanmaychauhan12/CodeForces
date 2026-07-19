#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int cnt = 1;
    int maxVal = 1;
    for(int i=1;i<n;i++){
        if(str[i]=='.' && str[i-1]==str[i]){
            cnt += 1;
        }else{
            cnt = 1;
        }
        maxVal = max(maxVal, cnt);
    }
    if(maxVal>=3){
        cout << 2 << "\n";
        return;
    }
    cnt = 0;
    for(int i=0;i<n;i++){
        if(str[i]=='.') cnt++;
    }
    cout << cnt << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}