#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, s, r;
    cin >> n >> s >> r;
    int mx = s - r;
    int x = r / (n-1);
    int y = r % (n - 1);
    vector<int> v(n-1, x);
    for(int i = 0; i < n - 1; i++){
        if(y == 0) break;
        v[i]++;
        y--;
    }
    v.push_back(mx);
  
    for(auto x: v){
        cout << x << ' ';
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
