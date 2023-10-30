#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

ll sumDigit(ll n)
{
    ll sum = 0;
    for(auto x: to_string(n)){
        sum += x - '0';
    }
    return sum ;
}
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    ll n, s;
    cin >> n >> s;

    ll low = 0;
    ll high = n + 1;
    while((high - low) > 1){
        ll mid = low + (high -  low) / 2;

        if(mid - sumDigit(mid) >= s){
            high = mid;
        }
        else{
            low = mid;
        }
    }
    cout << n - high + 1 << '\n';

    return 0;
}
