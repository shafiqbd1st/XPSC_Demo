#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())
#define sortg(v) sort(v.begin(), v.end(), greater<int>())
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
  
    map<ll, ll> mp;
    int n;
    cin >> n;
    while(n--){
        ll x;
        char ch;
        cin >> ch >> x;
        if(ch == '+'){
            mp[x] = x;
        }
        else{
            if(mp.find(x) == mp.end()){
                cout << x << '\n';
                continue;
            }
            ll curr = mp[x];
            while(mp.find(curr) != mp.end()){
                curr += x;
            }
            mp[x] = curr;
            cout << curr << '\n';

        }
    }

    return 0;
}
