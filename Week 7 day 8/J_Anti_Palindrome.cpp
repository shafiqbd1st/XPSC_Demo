#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())
#define sortg(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int len = str.size();
    vector<int> cnt(26, 0);
    for(char c: str){
        cnt[c-'a']++;
    }
    int tmp = 0;
    for(int i = 0; i < 26; i++){
        if(cnt[i] > 0) tmp++;
    }
    if(tmp == 1){
        if(n & 1){
            cout << 2 << '\n';
        }
        else cout << 1 << '\n';
        return;
    }
    if(n & 1){
        int odd = 0;
        for(int i = 0; i < 26; i++){
            if(cnt[i] & 1) odd++;
        }
        if(odd > 1) cout << 0 << '\n';
        else cout << 1 << '\n';
    }
    else{
        int odd = 0;
        for(int i = 0; i < 26; i++){
            if(cnt[i] & 1){
                odd++;
            }
        }
        if(odd) cout << 0 << '\n';
        else cout << 1 << '\n';
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
