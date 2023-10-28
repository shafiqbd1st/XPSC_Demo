#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x: v) cin >> x;
    int q;
    cin >> q;
    sort(v.begin(), v.end());
    while(q--){
        int x;
        cin >> x;
        int idxl = lower_bound(v.begin(), v.end(), x) - v.begin();
        int idxu = upper_bound(v.begin(), v.end(), x) - v.begin();

        // cout << idxl << ' ' << idxu << ' ';
        if(idxl == 0) cout << 'X' << ' ';
        else cout << v[idxl-1] << ' ';
        if(idxu == n){
            cout << 'X' << '\n';
        }
        else{
            cout << v[idxu] << '\n';
        }
    }

    return 0;
}
