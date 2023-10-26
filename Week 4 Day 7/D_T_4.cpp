#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i]; 
    }
    sort(v.begin(), v.end());
    ll cnt = 1;
    ll x = v[n-1];
    for(ll i = n-2; i >= 0; i--){
        if(x >= v[i]){
            x = x ^ v[i];
        }
        else{
            cnt++;
            x = v[i];
        }
    }
    cout << cnt << '\n';
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
