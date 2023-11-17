#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> v1(n);
    for(auto &x: v) cin >> x;
    for(auto &x: v1) cin >> x;

    int sum, i, j, mx;
    i = j = sum = mx = 0;
    while(i < n){
        sum += v[i];
        while(j <= i && sum > m){
            sum -= v[j];
            j++;
        }
        if(i > 0){
            if(j < i && v1[i-1] % v1[i] != 0){
                j = i;
                sum = v[i];
            }
        }
        mx = max(mx, i - j + 1);
        i++;
    }
    cout << mx << '\n';

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
