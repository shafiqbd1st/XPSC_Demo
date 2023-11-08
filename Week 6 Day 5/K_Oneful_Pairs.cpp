#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    int a, b;
    cin >> a >> b;
    int sum = a + b + (a * b);
    if(sum == 111){
        cout << "Yes" << '\n';
    }
    else{
        cout << "No" << '\n';
    }

    return 0;
}
