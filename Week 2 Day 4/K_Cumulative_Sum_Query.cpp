#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    ll ara[n + 1];
    ll item;
    cin >> ara[0];
    for(int i = 1; i < n; i++){
        cin >> item;
        ara[i] = ara[i-1] + item;
    }

    int q; cin >> q;
    while(q--){
        int x, y;
        cin >> x >> y;
        if(x == 0)
            cout << ara[y] << '\n';
        else
            cout << ara[y] - ara[x-1] << '\n';
    }
    return 0;
}
