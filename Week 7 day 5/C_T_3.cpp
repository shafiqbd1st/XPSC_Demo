#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    ll a, b;
    cin >> a >> b;
    if(a >= b){
        cout << "NO" << '\n';
        return 0;
    }
    ll val = (b - a) + 1;
    cout << "YES" << '\n';
    if(val & 1){
        for(ll i = a; i < b; i +=2){
            cout << i << ' ' << i + 1 << '\n';
        }
    }
    else{
        for(ll i = a; i <= b; i += 2){
            cout << i << ' ' << i + 1 << '\n';
        }
    }

    return 0;
}
