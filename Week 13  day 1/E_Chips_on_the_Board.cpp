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
    vector<ll> v(n), v1(n);
    for(auto &x: v) cin >> x;
    for(auto &x: v1) cin >> x;
    vector<ll> t, t1;
    t = v;
    t1 = v1;
    sorti(v1);
    sorti(t);
    ll x = v1[0];
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += (v[i] + x);
    } 
    ll sum1 = 0;
     x = t[0];
    for(int i = 0; i < n; i++){
        sum1 += (t1[i] + x);
    }
    cout << min(sum, sum1) << '\n';
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
