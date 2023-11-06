#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string str;
    cin >> str;
    if(str[0] > str[1]){
        int x = (25 * (str[0] - 'a') + str[1] - 'a') + 1;
        cout << x << '\n'; 
    }
    else{
         int x = (25 * (str[0] - 'a') + str[1] - 'a');
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
