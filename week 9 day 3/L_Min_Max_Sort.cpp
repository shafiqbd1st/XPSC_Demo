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
    int item, pos[n];
    for(int i = 0; i < n; i++){
        cin >> item;
        pos[item-1] = i;
    }
    int l = n / 2, r = n - l;
    while(l > 0 && pos[l - 1] < pos[l] && pos[r] > pos[r-1]){
        l--, r++;
    }
    cout << l << '\n';
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
