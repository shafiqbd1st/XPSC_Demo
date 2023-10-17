// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// const int N = 1e5 + 9;
// const int mod = 1e9 + 7;

// void solution()
// {
//     int n, k;
//     cin >> n >> k; 
//     vector<pair<int, int>> v(n);
//     vector<pair<int, int>> v1(n);
  
//     for(int i = 0; i < n; i++){
//         int x;
//         cin >> x;
//         v[i] = {x,i};
//     }
//     for(int i = 0; i < n; i++){
//         int x;
//         cin >> x;
//         v1[i] = {x, i};
//     }
   
//     sort(v1.begin(), v1.end());
//     sort(v.begin(), v.end());
//     vector<int> ans(n);
//     for(int i = 0; i < n; i++){
//         ans[v[i].second] = v1[i].first;
//     }
//     for(auto x: ans){
//         cout << x << ' ';
//     }
//     cout << '\n';
// }

// int main()
// {
//     ios_base:: sync_with_stdio(0);
//     cin.tie(0);
//     int t = 1;
//     cin >> t;
//     // cin.ignore();
//     for(int i = 1; i <= t; i++){
//         // cout << "Case " << i << ": ";
//         solution();
//     }
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define vpi vector<pii>
#define vi vector<int>
#define vvi vector<vi>

int main()
{
    int t; cin >> t; while(t--) {
        int n, k; cin >> n >> k;
        vpi a(n), b(n);
        for(int i=0; i<n; i++) {
            int x; cin >> x; a[i] = {x, i};
        }
        for(int i=0; i<n; i++) {
            int x; cin >> x; b[i] = {x, i};
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vi c(n);

        for(int i=0; i<n; i++) {
            c[a[i].second] = b[i].first;
        }

        for(int i=0; i<n; i++) cout << c[i] << " ";
        cout << endl;
    }
    return 0;
}