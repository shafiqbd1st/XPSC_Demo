#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;
int cnt[27];
int main()
{
    string str;
    cin >> str;
    int len = str.size();
    for(int i = 0; i < len; i++){
        cnt[str[i]-'a']++;
    }
    bool ck = 0;
    for(int i = 0; i < 26; i++){
        if(cnt[i] == 0){
            ck = 1;
            cout << char(i + 'a');
            break;
        }
    }
    if(ck == 0) cout << "None" << '\n';
   

    return 0;
}
