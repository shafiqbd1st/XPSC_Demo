#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

ll InvCnt(vector<int> v, int n)
{
    ll sum = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 1) cnt++;
        else sum += cnt;
    }
    return sum;
}
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x: v) cin >> x;
   
       ll ans = InvCnt(v, n);
        int idx = -1;
        for(int i = 0; i < n; i++){
            if(v[i] == 0){
                v[i] = 1;
                idx = i;
                break;
            }
        }
        ans = max(ans, InvCnt(v, n));
        if(idx != -1){
            v[idx] = 0;
        }
        for(int i = n - 1; i >= 0; i--){
            if(v[i] == 1){
                v[i] = 0;
                break;
            }
        }
        ans = max(ans, InvCnt(v, n));
        cout << ans << '\n';
    }
    return 0;
}
