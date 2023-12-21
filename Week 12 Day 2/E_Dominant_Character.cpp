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
    string str; cin >> str;
    int ans = -1;
    for(int i = 0; i < n; i++){
        int a, b, c;
        a = b = c = 0;
        for(int j = i; j < min(n, i + 20); j++){
            if(str[j] == 'a') a++;
            if(str[j] == 'b') b++;
            if(str[j] == 'c') c++;
            if(a > max(b, c) && j - i + 1 >= 2){
                if(ans == -1){
                    ans = j - i + 1;
                }
                ans = min(ans, j - i + 1);
            }
        }
    }
    cout << ans << '\n';
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
