#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, k;
    cin >> n >> k;
    int ara[n];
    int mx = 0;
    for(int i = 0; i < n; i++){
        cin >> ara[i];
        mx = max(mx, ara[i]);
    }
    int sum = (mx * (mx + 1)) / 2;
    for(int i = 0; i < n; i++){
        sum -= ara[i];
    }
    while(sum < k){
        mx++;
        sum += mx;
    }
    if(sum == k){
        cout << "YES" << '\n';
    }
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
