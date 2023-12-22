#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
#define pii pair<int, int>

const int N = 3e5 + 9;
const int mod = 1e9 + 7;
ll n, k;
ll req[N], has[N];

bool fun(ll need)
{
    ll sum = k;
    for(int i = 0; i < n; i++){
        if((req[i] * need) > has[i]){
            sum -= ((req[i] * need) - has[i]);
        }
        if(sum < 0) return 0;
    }
    return 1;
}

void solution()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> req[i];
    for(int i = 0; i < n; i++) cin >> has[i];

    ll low, high;
    low = 0, high = 1e10;
    ll ans = 0;
    while(low <= high){
        ll mid = (low + high) / 2;
        if(fun(mid)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << ans << '\n';

}

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    // cin.ignore();
    for(int i = 1; i <= t; i++){
        // cout << "Case " << i << ": ";
        solution();
    }
    
    return 0;
}
