#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string str, str1, tmp = "a";
    cin >> str >> str1;
    int len = str.size();
    int len1 = str1.size();
    int a = 0;
    for(int i = 0; i < len1; i++){
        if(str1[i] == 'a') a++;
    }
    if(str1 == tmp){
        cout << 1 << '\n';
    }
    else if(len1 > 1 && a > 0){
        cout << -1 << '\n';
    } 
    else{
       ll x = (1ll << len);
       cout << x << '\n';
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
