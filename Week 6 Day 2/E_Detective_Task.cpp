#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string str;
    cin >> str;
    int len = str.size();
    int cnt = 0;
    string ans = "";
    int c = 0;
    for(int i = 0; i < len; i++){
        if(str[i] == '0'){
            ans += str[i];
            c++;
            break;
        }
        else{
            ans += str[i];
        }
    }
   int len1 = ans.size();
   string str1 = "";
    for(int i = len1-1; i >= 0; i--){
        if(str[i] == '1'){
            str1 += ans[i];
            break;
        }
        else{
            str1 += ans[i];
        }
    }
    cout << str1.size() << '\n';
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
