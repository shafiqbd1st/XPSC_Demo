#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    string str;
    cin >> str;
    int p;
    cin >> p;
    map<char, int> mp;
    int len = str.size();
    set<char> st;
    int sum = 0;
    for(int i = 0; i < len; i++){
        sum += (str[i] - 'a')+1;
        mp[str[i]]++;
        st.insert(str[i]);
    }
    cout << sum << '\n';
    for(auto x = st.rbegin(); x != st.rend(); x++){
        // cout << mp[*x] << '\n';
        int t = mp[*x];
        while(t--){
            if(sum <= p) break;
            sum -= (*x - 'a')+1;
            mp[*x]--;
        }
    }
    cout << sum << '\n';
    string ans = "";
    for(auto x: str){
        if(mp[x] != 0){
            ans += x;
        }
    }
    cout << ans << '\n';
    return 0;
}
