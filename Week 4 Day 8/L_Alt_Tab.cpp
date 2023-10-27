#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
   
    }
    map<string, int> mp;
    stack<string> st1;
    for(int i = n-1; i >= 0; i--){
        string str = v[i];
        if(mp.find(str) == mp.end()){
            st1.push(str);
            mp[str] = 1;
        }
    }
    string ans = "";
    while(!st1.empty()){
        string str = st1.top();
        int len = str.size();
        string s;
        s = str[len-2];
        s = s+str[len-1];
        ans = s + ans;
      
        st1.pop();
    }
   cout << ans << '\n';
    return 0;
}
