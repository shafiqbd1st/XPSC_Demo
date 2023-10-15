#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string str = "Timur";
    int n;
    cin >> n;
    sort(str.begin(), str.end());
    string str1;
    cin >> str1;
    sort(str1.begin(), str1.end());
    if(str == str1) cout << "YES" << '\n';
    else cout << "NO" << '\n';


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