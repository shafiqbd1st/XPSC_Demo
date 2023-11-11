#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    int rem = n % 10;
    if(rem >= 5){
        n -= rem;
        int x = n / 10;
        cout << 100 - ((x + 1) * 10) << '\n';
    }
    else{
        n -= rem;
        cout << 100 - n << '\n';
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
