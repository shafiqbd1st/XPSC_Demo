#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
#define pii pair<int, int>

const int N = 3e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n; cin >> n;
    vector<int> si(n), ei(n);
    for(int i = 0; i < n; i++) cin >> si[i] >> ei[i];
    bool ck = 1;
    for(int i = 1; i < n; i++){
        if(si[i] >= si[0] && ei[i] >= ei[0]){
            ck = 0;
            break;
        }
    }
    if(ck) cout << si[0] << '\n';
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
