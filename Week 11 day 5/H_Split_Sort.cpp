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
    vector<int> v(n+1), pos(n+1);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        pos[v[i]] = i;
    }
    int ans = 0;
    for(int i = 2; i <= n; i++){
        if(pos[i-1] > pos[i]) ans++;
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
