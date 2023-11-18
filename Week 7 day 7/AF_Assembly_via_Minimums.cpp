#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())
#define sortg(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    int m = (n * (n - 1)) / 2;
    vector<ll> v(m);
    for(auto &x: v) cin >> x;
    sort(v);
    int sz = 1;
    int cnt = 1;
    vector<ll> ans;
    for(int i = 1; i < m; i++){
        if(v[i] == v[i-1]) cnt++;
        if(cnt == (n - sz)){
            ans.push_back(v[i]);
            cnt = 0;
            sz++;
        }
        if(v[i] != v[i-1]){
            cnt = 0;
        }
    }
   // ans.push_back(v[m-1]);
    cout << ans.size() << '\n';
    for(auto x: ans) cout << x << ' ';
    cout << '\n';

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
