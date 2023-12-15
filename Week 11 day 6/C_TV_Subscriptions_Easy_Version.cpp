#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> v(n);
    for(auto &x: v) cin >> x;
    int ans = INT_MAX;
    for(int i = 0; i <= n - d; i++){
        set<int> st;
        for(int j = 0; j < d; j++){
            st.insert(v[i+j]);
        }
        int len = st.size();
        ans = min(ans, len);
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
