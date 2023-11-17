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
    
    int n;
    cin >> n;
    int ans = n / 2;
    cout << ans << '\n';
    if(n & 1){
        for(int i = 1; i < ans; i++){
            cout << 2 << ' ';
        }
        cout << 3 << '\n';
    }
    else{
        for(int i = 1; i <= ans; i++){
            cout << 2 << ' ';
        }
        cout << '\n';
    }

    return 0;
}
