#include<bits/stdc++.h>
using namespace std;
#define ll long long


const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, m;
    cin >> n >> m;
    vector<ll> v(n);
    vector<ll> v1(m);
    for(auto &x: v) cin >> x;
    for(auto &x: v1) cin >> x;
    sort(v.begin(), v.end());
    //sort(v1.begin(), v1.end(), greater<int>());
    ll sum = 0;
    for(int i = 0; i < m; i++){
        sum += v1[i];
    }
    for(int i = m; i < n; i++){
        sum += v[i];
    }
    cout << sum << '\n';


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
