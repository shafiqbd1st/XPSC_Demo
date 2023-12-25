#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
#define pii pair<int, int>

const int N = 3e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n; cin >> n;
    set<int> ans, st[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        while(x--){
            int item; cin >> item;
            st[i].insert(item);
            ans.insert(item);
        }
    }
    int len = 0;
    for(auto x: ans){
        set<int> tmp;
        for(int i = 0; i < n; i++){
            if(st[i].find(x) == st[i].end()){
                for(auto y: st[i]){
                    tmp.insert(y);
                }
            }
        }
        int s_size = tmp.size();
        len = max(len, s_size);
    }
    cout << len << '\n';
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
