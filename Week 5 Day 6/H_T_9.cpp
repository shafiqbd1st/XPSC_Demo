#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    ll n, h;
    cin >> n >> h;
    vector<ll> v(n);
    for(auto &x: v) cin >> x;
    ll low = 0;
    ll high = *max_element(v.begin(), v.end());
    ll ans = 0;
    while(low <= high){
        ll mid = low + (high - low) / 2;
        //cout << mid << ' ';
        ll sum = 0;
        for(ll i = 0; i < n; i++){
            if(v[i] > mid){
                sum += v[i] - mid;
            }
        }
        if(sum >= h){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    cout << ans << '\n';

    return 0;
}
