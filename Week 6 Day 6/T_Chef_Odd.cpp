#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    ll n, k;
    cin >> n >> k;
    
    ll odd;
    if(n & 1){
        odd = (n / 2) + 1;
    }
    else{
        odd = n / 2;
    }

    if(n >= 2 * k){
        ll ans = odd - k;
        if(ans & 1){
            cout << "NO" << '\n';
        }
        else{
            cout << "YES" << '\n';
        }
    }
    else{
        cout << "NO" << '\n';
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
