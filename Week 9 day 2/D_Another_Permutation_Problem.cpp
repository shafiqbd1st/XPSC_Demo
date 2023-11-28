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
    int ara[n+1];
    for(int i = 1; i <= n; i++){
        ara[i] = i;
    }
    int l = n - 1;
    int mx = 0;
    for(int i = 1;  i <= n; i++){
        int tmp, sum, k;
        tmp = sum = 0;
        k = 1;
        for(int j = 1; j <= l; j++){
            sum += (j * ara[k]);
            tmp = max(tmp, (j * ara[k++])); 
        }
        for(int j = n; j > l; j--){
            sum += (j * ara[k]);
            tmp = max(tmp, (j * ara[k++]));
        }
        l--;
        int ans = sum - tmp;
        mx = max(ans, mx);
    }
    cout << mx << '\n';


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
