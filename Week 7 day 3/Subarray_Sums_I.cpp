#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &x: v) cin >> x;
    int i, j, cnt;
    ll sum;
    i = j = cnt = 0;
    sum = 0;
    while(i < n){
        sum += v[i];
        if(sum >= k){
            while(sum > k){
                sum -= v[j];
                j++;
            }
            if(sum == k) cnt++;
        }
        i++;
    }
    cout << cnt << '\n';

    return 0;
}
