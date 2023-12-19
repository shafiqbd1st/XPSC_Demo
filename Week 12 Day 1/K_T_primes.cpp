#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
#define pii pair<int, int>

const int N = 1e5 + 9;
const int mod = 1e9 + 7;
bool isPrime(ll n)
{
    if(n == 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(ll i = 3; i * i <= n; i += 2){
        if(n % i == 0) return false;
        
    }
    return true;
}
void solution()
{
    int n; cin >> n;
    for(ll i = 1; i <= n; i++){
        ll x; cin >> x;
        ll y = sqrt(x);
        if(y * y == x && isPrime(y)){
            cout << "YES" << '\n';
        }
        else cout << "NO" << '\n';
    }
}

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    // fun();
    int t = 1;
    // cin >> t;
    // cin.ignore();
    for(int i = 1; i <= t; i++){
        // cout << "Case " << i << ": ";
        solution();
    }
    
    return 0;
}
