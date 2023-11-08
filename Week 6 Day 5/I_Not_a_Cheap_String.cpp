#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string str;
    int p;
    cin >> str >> p;
    ll sum = 0;
    int len = str.size();
    map<char, ll> mp;
    set<char> st;
    
    for(int i = 0; i < len; i++){
        sum += (str[i] - 'a') + 1;
        mp[str[i]]++;
        st.insert(str[i]);
    }
    if(sum <= p){
        cout << str << '\n';
    }
    else{
        for(auto x = st.rbegin(); x != st.rend(); x++){
            int t = mp[*x];
            while(t--){
                if(sum <= p) break;
                sum -= (*x - 'a')+1;
                mp[*x]--;
            }
        }
        string ans = "";
        for(auto x: str){
            if(mp[x] != 0){
                ans += x;
                mp[x]--;
            }
        }
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
