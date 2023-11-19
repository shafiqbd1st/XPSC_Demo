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
    int x = 0;
    for(int i = 0; i < m; i += n){
        cout << v[i] << ' ';
        n -= 1;
    }
    cout << v[m-1] << '\n';

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
