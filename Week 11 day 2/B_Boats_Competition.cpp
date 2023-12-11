#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n; cin >> n; 
    vector<int> v(n);
    for(auto &x: v) cin >> x;
    int ans = INT_MIN;
    sorti(v);
    for(int mx = 1; mx <= 2 * n + 1; mx++){
        int i = 0, j = n - 1;
        int cnt = 0;
        while(i < j){
            int sum = v[i] + v[j];
            if(sum == mx){
                cnt++;
                i++, j--;
            }
            if(sum < mx) i++;
            if(sum > mx) j--;
        }
        ans = max(ans, cnt);
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
