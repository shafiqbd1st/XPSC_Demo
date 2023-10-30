#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    ll l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    if(a == b){
        cout << 0 << '\n';
    }
    else if(abs(a - b) >= x){
        cout << 1 << '\n';
    }
    else if(r - max(a, b) >= x || min(a, b) - l >= x){
        cout << 2 << '\n';
    }
    else if((r - b >= x && a - l >= x) || (r - a >= x && b - l >= x)){
        cout << 3 << '\n';
    }
    else cout << -1 << '\n';


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