#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    
    int x = n / 3;
    if(n % 3 == 0){
        cout << x << ' ' << x + 1 << ' ' << x - 1 << '\n';
    }
    else if(n % 3 == 1){
        cout << x << ' ' << x + 2 << ' ' << x - 1 << '\n';
    }
    else{
        cout << x + 1 << ' ' << x + 2 << ' ' << x - 1 << '\n';
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
