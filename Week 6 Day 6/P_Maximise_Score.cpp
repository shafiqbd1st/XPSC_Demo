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
    vector<int> ans(n);
    ans[0] = abs(v[0] - v[1]);
    ans[n-1] = abs(v[n-1] - v[n-2]);

    for(int i = 1; i < n - 1; i++){
        int a = abs(v[i] - v[i-1]);
        int a1 = abs(v[i] - v[i+1]);
        ans[i] = max(a, a1);
    
    }
   
    cout << *min_element(ans.begin(), ans.end()) << '\n';
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
