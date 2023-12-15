#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n; cin >> n;
    string str; cin >> str;
    vector<int>v(n+1, 0);
    for(int i = 0; i < n; i++){
        if(str[i] == '1'){
            v[i+1] = 2;
        }
    } 
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j += i){
            if(v[j] == 0){
                v[j] = 1;
                sum += i;
            }
            else if(v[j] == 2) break;
        }
    }

    
    cout << sum << '\n';

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
