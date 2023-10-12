#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    int ara[n];
    int sum[n+1];
   
    for(int i = 0; i < n; i++)
        cin >> ara[i];
    
    sum[0] = 0;
    for(int i = 1; i <= n; i++){
        sum[i] = sum[i-1] + ara[i-1];
    }

    sort(ara, ara + n);
  
    int sum1[n+1];
    sum1[0] = 0;
    for(int i = 1; i <= n; i++){
        sum1[i] = sum1[i-1] + ara[i-1];
    }
    int q;
    cin >> q;
    while(q--){
        int t, l, r;
        cin >> t >> l >> r;
        if(t == 1){
            cout << sum[r] - sum[l-1] << '\n';
        }
        else{
            cout << sum1[r] - sum1[l-1] << '\n';
        }
    }
  

    return 0;
}
