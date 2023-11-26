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
    for(int i = 0; i < n; i++){
        int item;
        cin >> item;
        if(st.find(item) != st.end()){
            st.erase(item);
        }
        else{
            v.push_back(item);
        }
    }
    sortd(v);
    bool ok = false;

    for(auto x: v){
        auto it = st.end();
        it--;
        int val = *it;
        if(val > (x - 1) / 2){
            ok = true;
            break;
        }
        st.erase(it);
    }
    if(ok) cout << -1 << '\n';
    else cout << v.size() << '\n';
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
