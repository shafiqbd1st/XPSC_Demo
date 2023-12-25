#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n >> k;
    string str; cin >> str;
    vector<int> v(26, 0);

    for(int i = 0; i < n; i++){
        v[str[i]-'a']++;
    }
    for(int i = 0; i < 26; i++){
        while(v[i] && k) v[i]--, k--;
    }
    reverse(str.begin(), str.end());
    string ans = "";
    for(int i = 0; i < n; i++){
        if(v[str[i] - 'a']){
            ans += str[i];
            v[str[i]-'a']--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
    
    return 0;
}
