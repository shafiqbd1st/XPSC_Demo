#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x: v) cin >> x;
    vector<int> v1(n);
    for(auto &x: v1) cin >> x;

    vector<int> ans(n);
    ans[0] = v1[0] - v[0];
    for(int i = 1; i < n; i++){
        if(v1[i-1] < v[i]){
            ans[i] = v1[i] - v[i];
        }
        else{
            ans[i] = v1[i] - v1[i-1];
        }
    }
    for(auto x: ans){
        cout << x << ' ';
    }
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
