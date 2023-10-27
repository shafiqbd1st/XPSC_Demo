#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

bool isPalin(int n)
{
    string str = to_string(n);
    int len = str.size();
    for(int i = 0, j = len - 1; i < j; j--, i++){
        if(str[i] != str[j]) return 0;
    }
    return 1;
}
void solution()
{
    vector<int> save;
    for(int i = 0; i < (1<<16) + 1; i++){
        if(isPalin(i)){
            save.push_back(i);
        }
    }
  
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    unordered_map<int, int> mp;
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        mp[v[i]]++;
        for(auto x: save){
            cnt += mp[x^v[i]];  
        }
    }
    cout << cnt << '\n';
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
