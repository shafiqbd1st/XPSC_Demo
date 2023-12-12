#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string str, str1; cin >> str >> str1;
    int len = str.size(), len1 = str1.size();
    // if(len > len1){
    //     cout << "NO" << '\n';
    //     return;
    // }
    // else if(str == str1){
    //     cout << "YES" << '\n';
    //     return;
    // }
    int i , j;
    j = 0;
    bool ok = false;
    for(int i = 0; i < len; ){
        int cnt = 0;
        char ch = str[i];
        while(str[i] == ch && i < len){
            cnt++;
            i++;
        }
        int cnt1 = 0;
        while(str1[j] == ch && j < len1){
            cnt1++;
            j++;
        }
        if(cnt1 < cnt){
            ok = true;
            break;
        } 
    }
   
    if(ok){
        cout << "NO" << '\n';
    }     
    else if(j != len1) {
        cout << "NO" << '\n';
    }
    else cout << "YES" << '\n';

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
