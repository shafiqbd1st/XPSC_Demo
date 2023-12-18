#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
#define pii pair<int, int>

const int N = 3e5 + 9;
const int mod = 1e9 + 7;
int n;
string str;
pii adj[N];

int solve(int s)
{
    if(adj[s].first == -1 && adj[s].second == -1){
        return 0;
    }
    int ans = 1e9;
    if(adj[s].first != -1){
        int add = 0;
        if('L' != str[s]){
            add++;
        }
        ans = min(ans, add + solve(adj[s].first));
    }
    if(adj[s].second != -1){
        int add = 0;
        if('R' != str[s]){
            add++;
        }
        ans = min(ans, add + solve(adj[s].second));
    }
    return ans;
}

void solution()
{
    cin >> n;
    cin >> str;
    for(int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;
        l--, r--;
        adj[i].first = l;
        adj[i].second = r;
    }
    int ans = solve(0);
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
