#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string str;
    cin >> str;
    int len = str.size();
    cout << abs(str[len-1] - str[0]) << ' ';

    bool ck = 0;
    if(str[0] > str[len-1]){
        swap(str[0], str[len-1]);
        ck = 1;
    }
    vector<pair<int, int>> v;
    for(int i = 0; i < len; i++){
        if(str[i] >= str[0] && str[i] <= str[len-1]){
            v.push_back({str[i], i + 1});
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';

    if(ck){
        int n = v.size();
        cout << 1 << ' ';
        for(int i = n - 2; i > 0; i--){
            cout << v[i].second << ' ';
        }
        cout << v[n-1].second << '\n';
    }
    else{
        for(auto x: v){
            cout << x.second << ' ';
        }
        cout << '\n';
    }

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
