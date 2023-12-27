#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
#define pii pair<int, int>

const int N = 3e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    ll n, x; cin >> n >> x;
    vector<ll> v(n);
    for(auto &x: v) cin >> x;

    ll low = 0, high = INT_MAX;
    while(low < high - 1){
        ll tmp = 0;
        ll mid = (low + high) / 2;
        for(int i = 0; i < n; i++){
            if(v[i] < mid){
                tmp += (mid - v[i]);
            }
        }
        if(tmp > x) high = mid;
        else low = mid;
    }
    cout << low << '\n';
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
