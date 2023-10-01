#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    if(n >= 1000){
        cout << n << '\n';
    }
    else if(n >= 100){
        cout << '0' << n << '\n';
    }
    else if(n >= 10){
        cout << "00" << n << '\n';
    }
    else{
        cout << "000" << n << '\n';
    }
    return 0;
}
