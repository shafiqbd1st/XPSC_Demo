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
    int cnt = 0;
    for(int i = 1; i < n-1 ; i++){
        if(ans[i-1] < ans[i] && ans[i] > ans[i+1]){
            cnt++;
            cout << i-1 << ' ' << i << ' ' << i + 1 << '\n';

        }
    }
    cout << cnt << '\n';
    for(auto x: ans){
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}
