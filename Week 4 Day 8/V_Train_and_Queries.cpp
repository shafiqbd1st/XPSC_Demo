#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, q;
    cin >> n >> q;
    map<int, vector<int>> mp;
    int item;
    for(int i = 0; i < n; i++){
        // cin >> v[i];
        cin >> item;
        mp[item].push_back(i); 
    }
    while(q--){
        int a, b;
        cin >> a >> b;
        vector<int> v1(mp[a]);
        vector<int> v2(mp[b]);
        int len = v1.size();
        int len1 = v2.size();
        if(len < 1 || len1 < 1){
        	cout << "NO" << '\n';
        }
        else if(v1[0] <= v2[len1-1]) cout << "YES" << '\n';
        else cout << "NO" << '\n';
        
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
