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
    vector<string> v[3];
    map<string, int> mp;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            cin >> str;
            v[i].push_back(str);
            mp[str]++;
        }
    }
    
    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(auto x: v[i]){
            if(mp[x] == 3){
                sum += 0;
            }
            else if(mp[x] == 2){
                sum += 1;
            }
            else if(mp[x] == 1){
                sum += 3;
            }
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
