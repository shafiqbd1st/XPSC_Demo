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
    cin >> n >> s;
    vector<ll> v(n);
    for(auto &x: v) cin >> x;
    ll sum = 0;
    int cnt = 0;
    map<ll, ll> mp;
    for(int i = 0; i < n; i++){
        sum += v[i];
        if(sum == s){
            cnt++;
        }
        
        if(sum > s){
            if(mp.find(sum - s) != mp.end()){
                cnt++;
            }
        }
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }
    cout << cnt << '\n';
    return 0;
}
