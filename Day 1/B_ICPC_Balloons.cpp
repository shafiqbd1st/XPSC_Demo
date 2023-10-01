#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int ara[27];
    int len = str.size();
    memset(ara, 0, sizeof(ara));
    
    for(int i = 0; i < len; i++){
        if(ara[str[i] - 'A'] == 0){
            ara[str[i]- 'A'] += 2;
        }
        else{
            ara[str[i] - 'A']++;
        }
    }
    int sum = 0;
    for(int i = 0; i < 27; i++){
        sum += ara[i];
    }
    cout << sum << '\n';
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
