#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    set<int> st;
    for(int i = 1; i <= n; i++){
        st.insert(i);
    }
    vector<int> v;
    v.push_back(1);
    for(int i = 2; i <= n; i++){
        for(int j = i; j <= n; j *= 2){
            if(st.find(j) != st.end()){
                v.push_back(j);
                st.erase(j);
            }
        }
    }
    for(auto x: v) cout << x << ' ';
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
        // cout << "Case " << i << ": ";
        solution();
    }
    
    return 0;
}
