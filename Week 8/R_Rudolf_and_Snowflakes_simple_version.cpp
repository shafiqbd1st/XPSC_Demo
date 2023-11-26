#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define yesNo(ok) if(ok) cout << "YES" << '\n'; else cout << "NO" << '\n';

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    if(n < 7){
        cout << "NO" << '\n';
    }
    else{
        bool ok = 0;
        for(int i = 2;  i * i <= n; i++){
            int node = 0;
            for(int j = 1; node < n; j *= i){
                node += j;
            }
            if(node == n){
                ok = 1;
                break;
            }
        }
        if(ok) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

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
