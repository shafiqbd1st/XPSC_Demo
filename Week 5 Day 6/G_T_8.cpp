#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, h;
    cin >> n >> h;
    vector<int> v(n);
    for(auto &x: v) cin >> x;

    sort(v.begin(), v.end());
    int low = 0;
    int high = accumulate(v.begin(), v.end(), 0);
    int ans;
    while(low <= high){
        int mid = low + (high - low) / 2;
        int hh = h;
        for(int i = 0; i < n; i++){
            if(mid < v[i]){
                hh -= v[i]; 
            }
        }
        if(hh <= 0){
            low = mid + 1;
        }
        else if(hh> 0){
            ans = mid;
            high = mid-1;
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