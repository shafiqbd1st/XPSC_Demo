#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int a, b, c;
    cin >> a >> b >> c;

    int diff1 = abs(a - 1);
    int diff2 = abs(b - c) + abs(c - 1);

    if(diff1 < diff2) cout << 1 << '\n';
    else if(diff1 > diff2) cout << 2 << '\n';
    else cout << 3 << '\n';
    
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
