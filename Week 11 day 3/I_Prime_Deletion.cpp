#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;
bool isPrime(int n)
{   if(n < 2) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3; i * i <= n; i+= 2){
        if(n % i == 0) return 0;
    }
    return 1;
}
void solution()
{
    string str; cin >> str;
    int ans;
    for(int i = 0; i < str.size(); i++){
         int x = str[i] - '0';
         bool ok = 0;
        for(int j = i+1; j < str.size(); j++){
            int y = str[j] - '0';
            ans = x*10 + y;
            if(isPrime(ans)){
            	ok = 1;
                break;
            }
        }
        if(ok) break;
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
