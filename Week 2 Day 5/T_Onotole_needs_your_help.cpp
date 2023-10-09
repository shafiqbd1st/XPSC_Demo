#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    ll ara[n];
    for(int i = 0; i < n; i++) cin >> ara[i];

    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans ^= ara[i]; 
    }
    cout << ans << '\n';
    
    return 0;
}
