#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n; cin >> n;
    int ara[2][n+1];
    ara[0][1] = 2 * n;
    ara[1][n] = (2 * n) - 1;

    int val = 2;
    for(int i = 2; i <= n; i += 2){
        ara[0][i] = val;
        ara[1][i-1] = val - 1;
        val += 2;
    }
    val = (2 * n) - 2;
    for(int i = 3; i <= n; i += 2){
        ara[0][i] = val;
        ara[1][i-1] = val - 1;
        val -= 2;
    }
    for(int i = 0; i < 2; i++){
        for(int j = 1; j <= n; j++){
            cout << ara[i][j] << ' ';
        }
        cout << '\n';
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
