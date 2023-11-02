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

    int l = 0, r = INT_MAX;
    bool ck = 0;
    while(l <= r){
        int mid = l + (r - l) / 2;
        double ans = 1.0;
        for(auto x: v){
            ans *= (x * 1.0 / mid);
        }
        if(fabs(ans - 1.0) < 1e-15){
            ck = 1;
            break;
        }
        else if(ans > 1.0){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    if(ck) cout << "YES" << '\n';
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
