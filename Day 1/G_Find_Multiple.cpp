#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    int cnt = 1;
    ll ans = 0;
    while(true){
        if(c >= a && c <= b){
            ans = c;
            break;
        } 
        else if(c > b) break;
        c += c;
    }
    if(ans > 0) cout << ans << '\n';
    else cout << -1 << '\n';

    return 0;
}
