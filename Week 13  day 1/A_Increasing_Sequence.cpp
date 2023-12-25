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
    int n; cin >> n;
    vector<ll> v(n);
    for(auto &x: v) cin >> x;
    ll ans;
    if(v[0] == 1){
        ans = 2;
    }
    else ans = 1;
    for(int i = 1; i < n; i++){
        if(ans + 1 != v[i]){
            ans++;
        }
        else ans += 2;
    }
    cout << ans << '\n';
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
