#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int cnt = 0;
    for(int i = 0; i < 3; i++){
        int item;
        cin >> item;
        if(item == 0) cnt++;
    }
    if(cnt >= 2) cout << "Water filling time" << '\n';
    else cout << "Not now" << '\n';
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
