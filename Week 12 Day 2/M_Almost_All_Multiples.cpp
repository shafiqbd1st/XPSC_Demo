#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
#define pii pair<int, int>

const int N = 3e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, x;
    cin >> n >> x;
    if(n % x != 0){
        cout << -1 << '\n';
        return;
    }
    if(n == x){
        cout << x << ' ';
        for(int i = 2; i < n; i++){
            cout << i << ' ';
        }
        cout << 1 << '\n';
        return;
    }
    vector<int> v(n +1);
    v[1] = x, v[n] = 1;
    for(int i = 2; i < n; i++){
        v[i] = i;
    }
    v[x] = n;
    for(int i = 2; i < n; i++){
        if(i % x == 0 && n % i == 0){
            swap(v[i], v[x]);
            x = i;
        }
    }
    for(int i = 1; i <= n; i++){
        cout << v[i] << ' ';
    }
    cout << '\n';
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
