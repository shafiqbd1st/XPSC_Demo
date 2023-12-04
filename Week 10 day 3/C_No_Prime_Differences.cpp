#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, m; cin >> n >> m;
    vector<vector<int>> v;
    int cnt = 1;
    for(int i = 0; i < n; i++){
        vector<int> tmp;
        for(int j = 0; j < m; j++){
            tmp.push_back(cnt++);
        }
        v.push_back(tmp);
    }
    for(int i = 1; i < n; i += 2){
        for(int j = 0; j < m; j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
    for(int i = 0; i < n; i += 2){
        for(int j = 0; j < m; j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
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
