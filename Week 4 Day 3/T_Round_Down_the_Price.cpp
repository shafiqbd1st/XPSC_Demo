#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solution()
{
    ll m;
    
    cin >> m;
    int i = 1;
    while(i <= m){
        i *= 10;
    }
    i /= 10;
    cout << m - i << '\n';
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;

    cin >> t;
    while(t--){
        solution();
    }

    return 0;
}