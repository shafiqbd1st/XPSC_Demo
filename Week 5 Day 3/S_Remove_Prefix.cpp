#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x: v) cin >> x;

    int freq[200000] = {0};
    int j = n - 1;
    while(j >= 0){
        if(freq[v[j]] == 1){
            break;
        }
        freq[v[j]]++;
        j--;
    }
    cout << j + 1 << '\n';
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
