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
    int n, x; cin >> n >> x;
    vector<ll> v(n);
    map<ll, ll> mp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    sorti(v);
    ll ans = 0;
    ll val;
    for(int i = 0; i < n; i++){
        if(mp[v[i]] <= 0 || mp.find(v[i]) == mp.end()) continue;
        else{
	        mp[v[i]]--;
	        val = v[i] * x;
	        if(mp[val] > 0 && mp.find(val) != mp.end()) mp[val]--;
	        else ans++;
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
