#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    map<string, bool> mp;
    vector<string> v;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        v.push_back(str);
        mp[str] = true;
    }
    for(int i = 0; i < n; i++){
        string str = v[i];
        int len = str.size();
        bool ck = false;
        for(int j = 0; j < len; j++){
            string x = str.substr(0, j);
            string y = str.substr(j, len - j);

            if(mp[x] && mp[y]){
                ck = true;
            }
        }
        cout << ck;
    }
    cout << '\n';
}

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    // cin.ignore();
    for(int i = 1; i <= t; i++){
   
        solution();
    }
    
    return 0;
}
