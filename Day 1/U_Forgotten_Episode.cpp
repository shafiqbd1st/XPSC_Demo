#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    int sum = (n * (n + 1) ) / 2;
    int item;
    for(int i = 1; i < n; i++){
        cin >> item;
        sum -= item;
    }
    cout << sum << '\n';
    
    return 0;
}
