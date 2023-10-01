#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    
    while(n--){
        int item;
        cin >> item;
        if(item % k == 0) cnt++;
    }
    cout << cnt << '\n';
    
    return 0;
}
