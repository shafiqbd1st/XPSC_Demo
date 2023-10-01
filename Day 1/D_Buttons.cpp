#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    if(a > b){
        sum += a;
        a--;
        if(a > b)
            sum += a;
        else sum += b;
    }
    else{
        sum += b;
        b--;
        if(b > a){
            sum += b;
        }
        else{
            sum += a;
        }
    }
    cout << sum << '\n';
    return 0;
}
