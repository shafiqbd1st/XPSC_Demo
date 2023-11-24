#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())
#define sortg(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    for(int i = 2; i * i <= n; i++){
        int val = n - i - 1;
        if(val != i && val != 1 && __gcd(val, i) == 1){
            cout << val << ' ' << i << ' ' << 1 << '\n';
            break;
        }
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
