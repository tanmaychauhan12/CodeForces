#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<vector<char>> grid(10, vector<char>(10));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(grid[i][j] == 'X'){
                int dist = min({i,9-i,j,9-j});
                ans += (dist + 1);
            }
        }
    }
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;    
}