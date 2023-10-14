#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string str = "314159265358979323846264338327";
    string str1;
    cin >> str1;
    int i = 0;
    while(i < 30){
        if(str[i] == str1[i]){
            i++;
        }
        else break;
    }
    cout << i << '\n';
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
