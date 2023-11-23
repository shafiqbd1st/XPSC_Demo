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
    vector<int> v(n), v1(n);
    for(auto &x: v) cin >> x;
    for(auto &x: v1) cin >> x;
    sort(v);
    sort(v1);

    bool ok = true;
    for(int i = 0; i < n; i++){
        if((v[i] != v1[i]) && (v[i] + 1 != v1[i])){
            ok = false;
            break;
        }
    }
    if(ok) cout << "YES" << '\n';
    else cout << "NO" << '\n';

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
