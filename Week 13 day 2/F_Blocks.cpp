#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    string str; cin >> str;
    int w = 0;
    w = count(str.begin(), str.end(), 'W');

    if((w & 1) && !(n & 1)){
        cout << -1 << '\n';
        return 0;
    }
    vector<int> v;
    for(int i = 0; i < n - 1; i++){
        if(str[i] == 'W'){
            v.push_back(i + 1);
            if(str[i+1] == 'W'){
                str[i+1] = 'B';
            }
            else if(str[i+1] == 'B'){
                str[i+1] = 'W';
            }
        }
    }
    if(str[n-1] == 'W'){
        for(int i = 1; i < n - 1; i += 2){
            v.push_back(i);
        }
    }
    cout << v.size() << '\n';
    for(auto x: v){
        cout << x << ' ';
    }
    cout << '\n';


    return 0;
}
