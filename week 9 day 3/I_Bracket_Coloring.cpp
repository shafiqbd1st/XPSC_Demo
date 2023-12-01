#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    if(n & 1){
        cout << -1 << '\n';
        return;
    }
    stack<char> st;
    set<int> st1;
    vector<int> v;
    int cnt = 0, ans = 1;
    for(int i = 0; i < n; i++){
        if(str[i] == '('){
            if(!st.empty()){
                if(st.top() == ')'){
                    v.push_back(2);
                    st1.insert(2);
                    st.pop();
                }
                else{
                    st.push(str[i]);
                    v.push_back(1);
                    st1.insert(1);
                }
            }
            else{
                st.push(str[i]);
                v.push_back(1);
            }
        }
        else if(st.empty() || (!st.empty() && st.top() == ')')){
            st.push(str[i]);
            v.push_back(2);
            st1.insert(2);
        }
        else{
            st.pop();
            v.push_back(1);
            st1.insert(1);
        }
    }
    if(st.size() != 0){
        cout << -1 << '\n';
    }
    else{
        cout << st1.size() << '\n';
        if(st1.size() == 1 && v[0] == 2){
            for(int i = 0; i < v.size(); i++) cout << 1 << ' ';
            cout << '\n';
            return;
        }
        for(auto x: v){
            cout << x << ' ';
        } 
        cout << '\n';
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
