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
    char c;
    cin >> n >> c;
    string str;
    cin >> str;
    int cnt = 0;
    if(count(str.begin(), str.end(), c) == n){
        cout << 0 << '\n';
        return;
    }
    for(int i = n / 2; i < n; i++){
        if(str[i] == c){
            cout << 1 << '\n';
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << 2 << '\n';
    cout << n - 1 <<  ' ' << n << '\n';

    
    

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
