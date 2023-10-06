#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int triple(int n, int ara[])
{
    int i = 0;
    int cnt = 0;
    while(i < n){
        int x = ara[i];
        i++;
        cnt = 1;
        while(x == ara[i] && i < n){
            i++;
            cnt++;
        }
        if(cnt >= 3){
            return x;            
       }
    }
    return -1;
}
void solution()
{
    int n;
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++){
        cin >> ara[i];
    }
    sort(ara, ara + n);
    int x = triple(n, ara);
    if(x == -1) cout << -1 << '\n';
    else cout << x << '\n';

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
