#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())
#define sortg(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int mn = n+1;
    for(char ch = 'a'; ch <= 'z'; ch++){
        int l = 0, r = n - 1, ans = 0;

        while(l < r){
            if(str[l] == str[r]){
                l++, r--;
            }
            else if(str[l] == ch){
                ans++, l++;
            }
            else if(str[r] == ch){
                ans++, r--;
            }
            else{
                ans = n + 1;
                break;
            }
        }
        mn = min(mn, ans);
    }
    if(mn == n + 1){
        cout << -1 << '\n';
    }
    else cout << mn << '\n';

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
