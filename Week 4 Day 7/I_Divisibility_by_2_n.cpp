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
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        int k = 0;
        while(v[i] % 2 == 0 && v[i] > 1){
            k++;
            v[i] /= 2;
        }
        cnt += k;
    }
    if(cnt >= n) cout << 0 << '\n';
    else{
        int op = n - cnt;
        vector<int> tmp;
        for(int i = n - (n%2); i >= 2; i -= 2){
            int val = i;
            int k = 0;
            while(val % 2 == 0 && val > 1){
                k++;
                val /= 2;
            }
            tmp.push_back(k);
        }
        sort(tmp.begin(), tmp.end(), greater<int>());
        int ans = 0;
        for(auto x: tmp){
            op -= x;
            ans++;
            if(op <= 0) break;
        }
        if(op <= 0) cout << ans << '\n';
        else cout << -1 << '\n';
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
