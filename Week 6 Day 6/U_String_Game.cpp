#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    string str;
    cin >> n >> str;
    
    stack<char> st;
    int cnt = 0;
    for(auto s: str){
        if(!st.empty() && st.top()!= s){
            cnt++;
            st.pop();
        }
        else{
            st.push(s);
        }
    }
    if(cnt % 2 == 0) cout << "Ramos" << '\n';
    else cout << "Zlatan" << '\n';
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
