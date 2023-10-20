#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int k, n;
    cin >> k >> n;
    int ara[k];
    int diff = 0;
    for(int i = k - 1; i >=0; i--){
        ara[i] = max(n - diff, 0);
        n -= diff;
        diff++; 
    }
    if(ara[0] == 0){
        ara[0] = 1;
        int i = 1;
        while(ara[i-1] >= ara[i] && i < k){
            ara[i] = ara[i-1] + 1;
            i++;
        }
    }
    for(int i = 0; i < k; i++){
        cout << ara[i] << ' ';
    }
    cout << '\n';

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
