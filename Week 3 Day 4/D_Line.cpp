#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    string str;
    vector<ll> v;
    cin >> str;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == 'L'){
            v.push_back((n-i-1) - i);
            sum += i;
        }
        else{
            v.push_back(i - (n - i - 1));
            sum += (n - i - 1);
        }
    }
    // for(auto x: v){
    //     cout << x << ' ';
    // }
    // cout << '\n';
    sort(v.begin(), v.end(), greater<int>());
    // for(auto x: v){
    //     cout << x << ' ';
    // }
    // cout << '\n';
    for(auto x: v){
        if(x > 0){
            sum += x;
        }        
        cout << sum << ' ';
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
