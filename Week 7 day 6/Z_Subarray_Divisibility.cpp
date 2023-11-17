#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    ll n, s;
    cin >> n;
    vector<ll> v(n);
    for(auto &x: v) cin >> x;
    ll sum = 0;
    ll cnt = 0;

    unordered_map<ll, ll> mp;
    for(int i = 0; i < n; i++){
        sum += v[i];
        int rem = ((sum % n) + n ) % n;
        if(rem == 0) cnt++;
        if(mp.find(rem) != mp.end()){
            cnt += mp[rem];
        }
        mp[rem]++;
    }
    cout << cnt << '\n';
    return 0;
}
