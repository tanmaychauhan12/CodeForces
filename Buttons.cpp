#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(c%2==0){
        if(a > b){
            cout << "First\n";
        }else{
            cout << "Second\n";
        }
    }else{
        if(a + 1 > b){
            cout << "First\n";
        }else{
            cout << "Second\n";
        }
    }
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}