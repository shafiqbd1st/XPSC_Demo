#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int ni, nj;
    int ck, ans;
    ans = ck = 0;
    for(int i = 1; i <= 8; i++){
        string str;
        cin >> str;
        int cnt = 0;
        int idx;
        for(int j = 1; j <= 8; j++){
            if(str[j-1] == '#'){
                cnt++;
                idx = j;
            }
        }
        if(cnt == 2 && ck == 0){
                ck = 1;
            }
        else if(cnt == 1 && ck== 1 && ans == 0){
            ni = i, nj = idx;
            ans = 1;
        }
    }
    cout << ni << ' ' << nj << '\n';
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