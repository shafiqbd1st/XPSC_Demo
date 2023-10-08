#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for(int x = 0; x <= k; x++){
        for(int y = 0; y <= k; y++){
            int ans = s - (x + y);
            if(ans >= 0 && ans <= k) cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}
