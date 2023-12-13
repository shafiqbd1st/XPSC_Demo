#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string str, str1; cin >> str >> str1;
    bool ok = false;
    int len = str.size();
    for(int i = 0; i < len - 1; i++){
        if(str[i] == str1[i] && str[i+1] == str1[i+1] && str[i] == '0' && str[i+1] == '1'){
            ok = true;
            break;
        }
    }
    if(ok) cout << "YES" << '\n';
    else cout << "NO" << '\n';
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
