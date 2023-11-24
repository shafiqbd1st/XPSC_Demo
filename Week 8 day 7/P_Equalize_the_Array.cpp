#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorta(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x: v) cin >> x;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[v[i]]++;
    }
    vector<int> tmp;
    for(auto x: mp){
        tmp.push_back(x.second);
    }
    int len = tmp.size();
    sorta(tmp);
    int ans = INT_MAX;
    for(int i = 0; i < len; i++){
        ans = min(ans, n - (tmp[i] * (len - i)));
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
