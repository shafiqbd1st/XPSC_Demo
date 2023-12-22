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
    string str, str1;
    cin >> str >> str1;

    while(1){
        if(str1.empty()){
            cout << "YES" << '\n';
            return;
        }
        if(str.empty()){
            cout << "NO" << '\n';
            return;
        }
        if(str.back() == str1.back()){
            str.pop_back();
            str1.pop_back();
        }
        else{
            str.pop_back();
            if(str.size()){
                str.pop_back();
            }
        }
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
