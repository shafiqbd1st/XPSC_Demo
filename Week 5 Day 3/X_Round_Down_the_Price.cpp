#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    ll n, val;
    cin >> n;
    int cnt = 0;
    val = n;
    while(n){
        n /= 10;
        cnt++;
    }
    ll x = 1;
    for(int i = 1; i < cnt; i++){
        x *= 10;
    }
    cout << val - x << '\n';

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
