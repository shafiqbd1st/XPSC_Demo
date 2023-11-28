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
    int item;
    vector<int> cnt(30, 0);
    for(int i = 0; i < n; i++){
        cin >> item;
        for(int j = 0; j < 30; j++){
            if((item >> j) & 1){
                cnt[j]++;
            }
        }
    }
    for(int k = 1; k <= n; k++){
        bool ok = true;
        for(int j = 0; j < 30; j++){
            if(cnt[j] % k != 0){
                ok = false;
                break;
            }
        }
        if(ok) cout << k << ' ';
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
