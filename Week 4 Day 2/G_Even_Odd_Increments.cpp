#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, q;
    cin >> n >> q;
    int ara[n];
    int odd, even;
    odd = even =0;
    ll odd_sum, even_sum;
    odd_sum = even_sum = 0;
    for(int i = 0; i < n; i++){
        cin >> ara[i];
        if(ara[i] & 1){
            odd++;
            odd_sum += ara[i];
        }
        else{
            even++;
            even_sum += ara[i];
        }
    }
    while(q--){
        int x, y;
        cin >> x >> y;
        if(x == 1){
            ll val = odd * y;
            odd_sum += val;
            if(y & 1){
                even += odd;
                odd = 0; 
            } 
        }
        else{
            ll val = even * y;
            even_sum += val;
            if(y & 1){
                odd += even;
                even = 0;
            }
        }
        cout << odd_sum + even_sum << '\n';
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
