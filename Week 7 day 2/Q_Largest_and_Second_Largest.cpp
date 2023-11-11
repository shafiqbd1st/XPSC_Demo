#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    set<int> st;
    int mx, mx1;
    mx = mx1 = 0;
    for(int i = 0; i < n; i++){
        int item;
        cin >> item;
        if(item > mx){
            mx1 = mx;
            mx = item;
        }
        else if(item > mx1 && item < mx){
            mx1 = item;
        }
    }
    cout << mx + mx1 << '\n'; 


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
