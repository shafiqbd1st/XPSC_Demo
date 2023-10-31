#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string str;
    cin >> str;
 

    int cnt = 0;
    set<char> st;
    for(int i = 0; i < str.size(); i++){
        st.insert(str[i]);
        if(st.size() > 3){
            cnt++;
            i--;
            st.clear();
        }
    }
    if(st.size() > 0) cout << cnt + 1 << '\n';
    else cout << cnt << '\n';
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
