#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != t[i]) cnt++;
    }
    cout << cnt << '\n';
    
    return 0;
}
