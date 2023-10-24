#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    int ara[n];
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> ara[i];
        sum += abs(ara[i]);
    }
    int cnt = 0, i = 0;
    while(i < n){
        if(ara[i] < 0){
            cnt++;
            while(ara[i] <= 0) i++;
        }
        else i++;
    }
    cout << sum << ' ' << cnt << '\n';
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
