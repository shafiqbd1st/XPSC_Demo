#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
#define pii pair<int, int>

const int N = 3e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    ll n; cin >> n;
    vector<ll> v;
    set<ll> v1;

    ll tmp = n;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            v.push_back(i);
            v1.insert(i);
            n /= i;
        }
    }
    if(n > 1){
      v.push_back(n);  
      v1.insert(n);  
    } 
    
    if(v1.size() < 3){
        cout << "NO" << '\n';
    }
    else{
        cout << "YES" << '\n';
        sorti(v);
        ll x = v[0];
        ll y = v[1];
        cout << x << ' ' << y << ' ' << tmp / (x * y) << '\n';
    }

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
