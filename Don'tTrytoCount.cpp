#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin >> n >>m;
    string x,s;
    cin >> x;
    cin >> s;
    int cnt = 0;
    while(x.length() < s.length()){
        x += x;
        cnt++;
    }
    if(x.find(s) != string::npos){
        cout << cnt << "\n";
    }else{
        x += x;
        cnt++;
        if(x.find(s) != string::npos){
            cout << cnt << "\n";
        }else{
            cout << -1 << "\n";
        }
    }    
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}