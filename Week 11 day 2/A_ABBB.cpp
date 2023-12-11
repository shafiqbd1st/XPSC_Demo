#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string str; cin >> str;
    stack<char> st;
    for(int i = 0; i < str.size(); i++){
        if(!st.empty() && st.top() == 'A' && str[i] == 'B'){
            st.pop();
        }
        else if(!st.empty() && st.top() == 'B' && str[i] == 'B'){
            st.pop();
        }
        else{
            st.push(str[i]);
        }
    }
    cout << st.size() << '\n';

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
