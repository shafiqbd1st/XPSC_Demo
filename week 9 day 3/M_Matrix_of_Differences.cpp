#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    int ara[n+1][n+1];
    int l = 1, r = n * n, cnt = 1;
    for(int i = 1; i <= n; i++){
        if(i&1){
            for(int j = 1; j <= n; j++){
                if(cnt&1){
                    ara[i][j] = l;
                    l++;
                }
                else{
                    ara[i][j] = r;
                    r--;
                }
                cnt++;
            }
        }
        else{
            for(int j = n; j >= 1; j--){
                if(cnt&1){
                    ara[i][j] = l;
                    l++;
                }
                else{
                    ara[i][j] = r;
                    r--;
                }
                cnt++;
            }
        }
    }
    for(int i = 1; i <= n; i++){
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
