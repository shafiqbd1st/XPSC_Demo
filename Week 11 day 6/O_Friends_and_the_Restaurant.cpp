#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

bool cmp(pair<int, int> v1, pair<int, int> v2)
{
    int a = v1.second - v1.first;
    int b = v2.second - v2.first;
    return a > b;
    
}
void solution()
{
    int n; cin >> n;
    vector<int> cost1(n);
    vector<int> cost2(n);
    for(auto &x: cost1) cin >> x;
    for(auto &x: cost2) cin >> x;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        v.push_back({cost1[i], cost2[i]});
    }
    // for(auto x: v){
    //     cout << x.first << ' ' << x.second << '\n';
    // }
    // cout << '\n';
    sort(v.begin(), v.end(), cmp);
    // for(auto x: v){
    //     cout << x.first << ' ' << x.second << '\n';
    // }
    int ans = 0;
    for(int i = 0, j = n - 1; i < j;){
        int x = v[i].first + v[j].first;
        int y = v[i].second + v[j].second;
        int a = v[i].second - v[i].first;
        int b = v[j].second - v[j].first;
        if(x <= y){
            ans++;
            i++, j--;
        }
        else if(a > b){
            j--;
        }
        else i++;
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
