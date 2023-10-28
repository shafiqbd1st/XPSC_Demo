#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, q;
    int cnt = 1;
    while(1){
        cin >> n >> q;
        if(n == 0 || q == 0) break;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        cout << "CASE# " << cnt++ << ":" << '\n';
        sort(v.begin(), v.end());
        while(q--){
            int x;
            cin >> x;
            int l = 0;
            int r = n - 1;
            int ans = -1;

            while(l <= r){
                int mid = (l + r) / 2;
                if(v[mid] == x){
                    ans = mid;
                    r = mid - 1;
                }
                else if(x < v[mid]){
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            if(ans == -1){
                cout << x << " not found" << '\n';
            }
            else{
                cout << x << " found at " << ans+1 << '\n';
            }
        }
    }
}

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    // cin.ignore();
    for(int i = 1; i <= t; i++){
        // cout << "Case " << i << ": ";
        solution();
    }
    
    return 0;
}
