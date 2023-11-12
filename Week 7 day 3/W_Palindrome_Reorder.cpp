#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    string str;
    cin >> str;
    string tmp = str;
    reverse(tmp.begin(), tmp.end());
    if(tmp == str){
        cout << str << '\n';
        return 0;
    }
    map<char, int> mp;
    int cnt = 0, ok = 0;
    char ch;
    for(char c: str){
        mp[c]++;
    }
   
    for(auto x: mp){
        if(x.second & 1){
            ch = x.first;
            cnt = x.second;
            ok++;
        }
    }
  
   
    if(ok > 1) cout << "NO SOLUTION" << '\n';
    else{
        string str1 = "", str2 = "";
        for(char i = 'A'; i <= 'Z'; i++){
            if(mp[i] != 0 && mp[i] % 2 == 0){
                int val = mp[i];
                // while(val){
                //     str1 += i;
                //     str2 = i + str2;
                //     val -= 2;
                // }
                string demo(val/2, i);
                str1 += demo;
                str2 = demo + str2;
            }
        }
        while(cnt--){
            str1 += ch;
        }
        string ans = str1 + str2;
        cout << ans << '\n';
    }
    
    

    return 0;
}
