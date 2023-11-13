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
    
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll tmp = n / ((a / __gcd(a, b)) * b);
    if(p > q){
        tmp *= q;
    }
    else{
        tmp *= p;
    }
    ll x = n / a;
    ll y = n / b;
    ll ans = (x * p) + (y * q);
    cout << ans - tmp << '\n';

    return 0;
}
