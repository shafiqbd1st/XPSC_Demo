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
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for(auto &x: v) cin >> x;
    vector<bitset<31>> b(n);
    for(int i = 0; i < n; i++){
        bitset<31> tmp(v[i]);
        b[i] = tmp;
    }
    ll ans = 0;
    for(int i = 30; i >= 0; i--){
        int need = 0;
        for(int j = 0; j < n; j++){
            need += (b[j][i] == 0);
        }
        if(need <= k){
            k -= need;
            ans += (1 << i);
        }
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
