#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    if(n >= 1 && n <= 10){
        cout << "Lower Double" << '\n';
    }
    else if(n >= 11 && n <= 15){
        cout << "Lower Single" << '\n';
    }
    else if(n >= 16 && n <= 25){
        cout << "Upper Double" << '\n';
    }
    else{
        cout << "Upper Single" << '\n';
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
