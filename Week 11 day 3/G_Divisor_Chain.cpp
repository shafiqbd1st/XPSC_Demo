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
    vector<int> v;
    v.push_back(n);
    while(__builtin_popcount(n) > 1){
        int x = __builtin_ctz(n);
        n -= (1 << x);
        v.push_back(n);
    }
    while(n > 1){
        n >>= 1;
        v.push_back(n);
    }
    cout << v.size() << '\n';
    for(auto x: v) cout << x << ' ';
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
