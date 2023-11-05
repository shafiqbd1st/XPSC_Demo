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
    int i = n - 1;
    int cnt = 0;
    if(n == 1){
        cout << 0 << '\n';
        return;
    }
    while(i > 0){
        while(v[i] <= v[i-1]){
            v[i-1] /= 2;
            cnt++;
            if(v[i-1] == 0) break;
        }
        i--;
    
    }
    int ans = v[0];
    bool ck = 1;
    for(int i = 1; i < n; i++){
        if(ans < v[i]){
            ans = v[i];
        }
        else{
            ck = 0;
            break; 
        }
    }
    if(ck) cout << cnt << '\n';
    else cout << -1 << '\n';
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
