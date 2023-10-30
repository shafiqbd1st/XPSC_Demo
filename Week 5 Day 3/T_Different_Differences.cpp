#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int k, n;
    cin >> k >> n;
    vector<int> v(k);
    int diff = 0;
    for(int i = k - 1; i >= 0; i--){
        v[i] = max(n - diff,  0);
        n -= diff;
        diff++;
    }
    if(v[0] == 0){
        v[0] = 1;
        int i = 1;
        while(v[i-1] >= v[i] && i < k){
            v[i] = v[i-1] + 1;
            i++;
        }
    }
    for(auto x: v){
        cout << x << ' ';
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
