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
    cin >> str;
    int A, B, S;
    A = B = S = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == 'A' && S == 0){
            A++;
        }
        else if(str[i] == 'A' && S == 1){
            S = 0;
        }
        else if(str[i] == 'B' && S == 0){
           S = 1;
        }
        else if(str[i] == 'B' && S == 1){
            B++;
        }
    }
    cout << A << ' ' << B << '\n';

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
