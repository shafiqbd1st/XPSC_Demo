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
    vector<string> v(n);
    for(auto &x: v) cin >> x;
    vector<vector<int>> ans(n);
    for(int i = 0; i < n; i++){
        ans[i].push_back(i+1);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(v[i][j] == '1'){
                ans[j].push_back(i+1);
            }
        }
    }
    for(auto x: ans){
        cout << x.size() << ' ';
        sorti(x);
        for(auto y: x){
            cout << y << ' ';
        }
        cout << '\n';
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
