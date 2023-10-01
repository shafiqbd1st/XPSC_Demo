#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a * a + b * b < c * c) cout << "Yes" << '\n';
    else cout << "No" << '\n';

    return 0;
}
