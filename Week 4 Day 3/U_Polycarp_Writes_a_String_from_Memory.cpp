#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solution()
{
    string str;

    cin >> str;
    set<char> st;
    int cnt = 1;

    for(auto c: str){
        st.insert(c);
        if(st.size() >= 4){
            cnt++;
            st.clear();
            st.insert(c);
        }
    }
    cout << cnt << '\n';
    
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;

    cin >> t;
    while(t--){
        solution();
    }

    return 0;
}