#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int n;
    ll sum = 0;
    cin >> n;
    for(int a = 1; a <= n; a++){
        for(int b = 1; b <= n; b++){
            for(int c = 1; c <= n; c++){
                sum += __gcd(a, __gcd(b, c));
            }
        }
    }
    cout << sum << '\n';
    return 0;
}
