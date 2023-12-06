#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    vector<int> ans;
    ans.push_back(n);
    for(int i = 1; i < n; i *= 2){
        if((n & i) == i){
            n -= i;
            ans.push_back(n);
        }
    }
    while(n != 1){
        n >>= 1;
        ans.push_back(n);
    }
    cout << ans.size() << '\n';
    for(auto x: ans){
        cout << x << ' ';
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
