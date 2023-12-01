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
    int ara[n];
    for(int i = 0; i < n; i++){
        cin >> ara[i];
    }
    if(n == 1){
        cout << 1 << '\n';
        return;
    }
    int cnt = 1, idx = 0;
    for(int i = 1; i < n; i++){
        if(ara[i] < ara[i-1] && idx != 1){
            cnt++;
            idx = 1;
        }
        else if(ara[i-1] < ara[i] && idx != -1){
            cnt++;
            idx = -1;
        }
    }
    cout << cnt << '\n';
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
