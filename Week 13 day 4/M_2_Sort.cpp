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
    int n, k; cin >> n >> k;
    vector<int> v(n);
    
    for(auto &x: v) cin >> x;

    int ans = 0, cnt = 1;
    for(int i = 1; i < n; i++){
        if(v[i-1] < 2 * v[i]) cnt++;
        else cnt = 1;
        if(cnt > k) ans++;
    }
    cout << ans << '\n';

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
