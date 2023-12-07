#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n; cin >> n;
    set<int> st;
    int item;
    for(int i = 0; i < n; i++){
        cin >> item;
        st.insert(item);
    }
    if(n == 1) cout << 1 << '\n';
    else if(st.size() >= 3){
        cout << n << '\n';
    }
    else{
        int ans = ((n - 2) / 2) + 2;
        cout << ans << '\n';
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
