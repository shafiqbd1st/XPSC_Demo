#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int a, b;
    cin >> a >> b;
    if(b <= a){
        cout << 0 << '\n';
    }
    else{
        cout << (b - a) + 1 << '\n';
    }
    return 0;
}
