#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ll a, b;
    cin >> a >> b;
    ll ans = 1;
    int cnt = 1;
    while(true){
        a *= 2;
        if(a <= b){
           cnt++;
        }
        else break;
    }
    cout << cnt << '\n';

    return 0;
}
