#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, k; cin >> n >> k;
    string str; cin >> str;

    if(k % 2 == 0){
        sorti(str);
        cout << str << '\n';
        return;
    }
    string odd, even;
    odd = even = "";
    for(int i = 0; i < n; i++){
        if(i & 1) odd += str[i];
        else even += str[i];
    }
    sorti(odd);
    sorti(even);
    int oi, ei;
    oi = ei = 0;
    for(int i = 0; i < n; i++){
        if(i & 1) cout << odd[oi++];
        else cout << even[ei++];
    }
    
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
