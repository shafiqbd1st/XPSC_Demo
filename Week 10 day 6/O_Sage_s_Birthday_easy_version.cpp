#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++){
        cin >> ara[i];
    }
    sort(ara, ara + n);
    vector<int> ans(n);
    int j = 0;
    for(int i = 1; i < n; i += 2){
        ans[i] = ara[j];
        j++;
    }
    for(int i = 0; i < n; i += 2){
        ans[i] = ara[j];
        j++;
    }
    cout << (n - 1) / 2 << '\n';
    for(auto x: ans){
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}
