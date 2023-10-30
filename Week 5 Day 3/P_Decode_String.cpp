#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string demo = "abcdefghijklmnopqrstuvwxyz";
    int n;
    cin >> n;
    string str;
    cin >> str;
    string ans = "";
    int len = str.size();
    for(int i = len - 1; i >= 0; i--){
        if(str[i] == '0'){
            i--;
            int x = str[i] - '0';
            i--;
            x = x + (str[i] - '0') * 10;
            ans = demo[x-1] + ans;
        }
        else{
            ans = demo[(str[i] - '0')-1] + ans;
        }
    }
    cout << ans << '\n';


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
