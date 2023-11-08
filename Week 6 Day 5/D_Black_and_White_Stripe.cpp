#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int len = str.size();
    int ans = INT_MAX;
    int i, j, B, W;
    i = j = B = W = 0;
    bool ck = 0;
    while(i < len){
        if(str[i] == 'B') B++;
        if(str[i] == 'W') W++;
        if(i >= k - 1){
            if(B == k){
                ans = 0;
                ck = 1;
                break;
            }
            ans = min(W, ans);
            if(str[j] == 'B') B--;
            else W--;
            j++;
        }
        i++;
    }
    if(ck){
        cout << ans << '\n';
    }
    else{
        
        cout << ans << '\n';
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
