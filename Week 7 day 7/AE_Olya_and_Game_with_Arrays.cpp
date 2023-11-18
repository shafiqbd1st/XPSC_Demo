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

    vector<ll> mn1, mn2;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        vector<ll> v(m);
        for(auto &x: v) cin >> x;
        sort(v);
        mn1.push_back(v[0]);
        mn2.push_back(v[1]);
    }
    sort(mn1);
    sort(mn2);
    ll sum = mn1[0];
    for(int i = 1; i < n; i++){
        sum += mn2[i];
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
