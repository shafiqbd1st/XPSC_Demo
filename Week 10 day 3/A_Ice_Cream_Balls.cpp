#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    ll n, high, low;
    cin >> n;
    high = 2e9, low = 1;
    while(high - low > 1){
        ll mid = low + (high - low) / 2;
        ll midCr = (mid * (mid - 1)) / 2;
        if(midCr <= n){
            low = mid;
        }
        else high = mid;
    }
    ll lowCr = (low * (low - 1)) / 2;
    ll tmp = n - lowCr;
    cout << low + tmp << '\n';

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
