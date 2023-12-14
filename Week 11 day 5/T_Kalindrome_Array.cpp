#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n; cin >> n;
    vector<int> v(n);
    vector<int> tmp(n);
    for(auto &x: v) cin >> x;
    tmp = v;
    rev(tmp);
    if(tmp == v){
        cout << "YES" << '\n';
        return;
    }
    int x, y;
    for(int i = 0, j = n - 1; i < j; i++, j--){
        if(v[i] != v[j]){
            x = v[i];
            y = v[j];
            break;
        }
    }
    vector<int> v1;
    vector<int> v2;
    for(auto val: v){
        if(x == val) continue;
        v1.push_back(val);
    }
    for(auto val: v){
        if(val == y) continue;
        v2.push_back(val);
    }
    tmp = v1;
    rev(tmp);
    if(tmp == v1){
        cout << "YES" << '\n';
        return;
    }
    tmp = v2;
    rev(tmp);
    if(tmp == v2){
        cout << "YES" << '\n';
        return;
    }
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
