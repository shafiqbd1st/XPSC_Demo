#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int x, y;
    cin >> x >> y;
    if(y % x != 0){
        cout << 0 << ' ' << 0 << '\n';
        return;
    }
    else{
        int ans = y / x;
        
        cout << 1 << ' ' << ans << '\n';
    }
    
}

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    // cin.ignore();
    for(int i = 1; i <= t; i++){
        // cout << "Case " << i << ": ";
        solution();
    }
    
    return 0;
}