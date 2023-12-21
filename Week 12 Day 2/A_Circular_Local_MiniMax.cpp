#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
#define pii pair<int, int>

const int N = 3e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n; cin >> n;
    vector<int> v(n), ans;
    for(auto &x: v) cin >> x;
    
    if(n&1){
        cout << "NO" << "\n";
        return;
    }
    sorti(v);
    for(int i = 0, j = n / 2; i < n / 2; i++, j++){
        ans.push_back(v[i]);
        ans.push_back(v[j]);
    }
    ans.push_back(ans[0]);
    ans.push_back(ans[1]);
    bool ok = 1;
    for(int i = 1; i < ans.size() - 1; i++){
        if(ans[i] > ans[i-1] && ans[i] > ans[i+1]) continue;
        else if(ans[i] < ans[i-1] && ans[i] < ans[i+1]) continue;
        else{
            ok = 0;
            break;
        }
    }
    if(ok){
        cout << "YES" << '\n';
        for(int i = 0; i < ans.size() - 2; i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    else{
        cout << "NO" << '\n';
    }

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
