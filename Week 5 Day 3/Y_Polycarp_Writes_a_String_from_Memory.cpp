#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int freq[27] = {0};
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        
        freq[str[i] - 'a']++;
    }
    int cnt = 0;
    for(int i = 0; i < 26; i++){
        if(freq[i] != 0) cnt++;
    }
    cout << cnt << '\n';
}

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    cin.ignore();
    for(int i = 1; i <= t; i++){
        // cout << "Case " << i << ": ";
        solution();
    }
    
    return 0;
}
