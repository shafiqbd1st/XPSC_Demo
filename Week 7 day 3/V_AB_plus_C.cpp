#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    ll n;
    cin >> n;
    if(n == 1) cout << -1 << '\n';
    else if(n <= 1000000){
        cout << 1 << ' ' << n - 1 << ' ' << 1 << '\n';
    }
    else{
        ll div = n / 1000000;
        ll rem = n % 1000000;
        if(rem == 0){
            cout << div - 1 << ' ' << 1000000 << ' ' << 1000000 << '\n'; 
        }
        else{
            cout << div << ' ' << 1000000 << ' ' << rem << '\n';
        }
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
