#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    bool flag = 0;
    for(int mask = 0; mask < (1 << n); mask++){
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(mask & (1 << i)){
                sum += v[i];
            }
            else{
                sum -= v[i];
            }
        }
        if(sum %  360 == 0){
            flag = 1;
            break;
        }
    }
    if(flag) cout << "YES" << '\n';
    else cout << "NO" << '\n';
     
    return 0;
}
