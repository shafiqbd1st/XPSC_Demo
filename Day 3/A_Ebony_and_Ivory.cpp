#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

bool fun(int a, int b, int c)
{
    for(int i = 0; i <= 10000; i++){
        for(int j = 0; j <= 10000; j++){
            if((i * a) + (b * j) == c) return true;
        }
    }
    return false;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if(fun(a, b, c)){
        cout << "Yes" << '\n';
    }
    else{
        cout << "No" << '\n';
    }
    return 0;
}
