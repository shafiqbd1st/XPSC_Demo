#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

bool isValid(vector<int> v, int mid, int n, int c)
{
    int cnt = 1;
    int last = 0;
    for(int i = 1; i < n; i++){
        if(abs(v[i] - v[last]) >= mid){
            cnt++;
            last = i;
        }
    }
    return cnt >= c;
}
void solution()
{
    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    for(auto &x: v) cin >> x;
    sort(v.begin(), v.end());

    int l = 0;
    int r = v[n-1] - v[0];
    int ans;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(isValid(v, mid, n, c)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
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
