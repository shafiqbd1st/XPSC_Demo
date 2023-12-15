#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, m; cin >> n >> m;

    if(m < n){
        cout << "No" << '\n';
    }
    else if(n & 1){
        cout << "Yes" << '\n';
        for(int i = 0; i < n - 1; i++){
            cout << 1 << ' ';
        }
        cout << m - (n -1) << '\n';
    }
    else if(!(m & 1)){
        cout << "Yes" << '\n';
        for(int i = 0; i < n - 2; i += 2){
            cout << 1 << ' ' << 1 << ' ';
        }
        m -= n - 2;
        cout << m / 2 << ' ' << m / 2 << '\n';
    }
    else{
        cout << "No" << '\n';
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
