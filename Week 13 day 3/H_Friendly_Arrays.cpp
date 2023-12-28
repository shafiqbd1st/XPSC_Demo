#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
#define pii pair<int, int>

const int N = 3e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, m; cin >> n >> m;
    vector<int> v(n);
    for(auto &x: v) cin >> x;
    int bi = 0, a1 = 0, a2 = 0, b;
    for(int i = 0; i < m; i++){
        cin >> b;
        bi |= b;
    }
    for(int i = 0; i < n; i++){
        a1 ^= v[i];
        a2 ^= (v[i] | bi);
    }
    if(n&1){
        cout << a1 << ' ' << a2 << '\n';
    }
    else cout << a2 << ' ' << a1 << '\n';
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
