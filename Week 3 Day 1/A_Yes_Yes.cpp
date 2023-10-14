#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;
string ans = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
string str;
int len;
void solution()
{
    cin >> str;
    len = str.size();
    bool ck = 0;
    for(int i = 0; i < 51; i++){
        int j = i;
        int k = 0;
        while(ans[j] == str[k] && j < 51 && k < len){
            j++, k++;
        }
        if(k == len){
            ck = 1;
            break;
        }
    }
    if(ck == 1) cout << "YES" << '\n';
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
