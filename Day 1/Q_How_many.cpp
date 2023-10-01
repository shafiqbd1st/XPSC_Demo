#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int s, t;
    cin >> s >> t;

    int cnt = 0;
    for(int i = 0; i <= 100; i++){
        for(int j = 0; j <= 100; j++){
            for(int k = 0; k <= 100; k++){
                if((i * j * k) <= t && (i + j + k) <= s){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << '\n';

    return 0;
}
