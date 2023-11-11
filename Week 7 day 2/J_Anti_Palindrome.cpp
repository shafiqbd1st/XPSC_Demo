#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

bool isPalin(string str)
{
    string str1 = str;
    reverse(str1.begin(), str1.end());
    return str1 == str;
}
void solution()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    if(isPalin(str)){
        if(n == 3){
            if(str[0] == str[1] && str[1] == str[2]){
                cout << 2 << '\n';
            }
            else cout << 1 << '\n';
        }
        else if(n & 1){
            cout << 2 << '\n';
        }
        else cout << 1 << '\n';
    }
    else if(n == 3){
        if(str[0] == str[1] || str[1] == str[2]){
            cout << 1 << '\n';
        }
        else cout << 0 << '\n';
    }
    else cout << 0 << '\n';

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
