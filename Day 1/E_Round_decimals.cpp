#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    double num;
    cin >> num;
    int x = num;
    double num1 = (x*1.0) + 0.5;
    if(num < num1){
        cout << x << '\n';
    }
    else{
        cout << x + 1 << '\n';
    }
    return 0;
}
