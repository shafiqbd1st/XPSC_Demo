#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    int ara[n];
    
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> ara[i];
        sum += ara[i];
    }
    sort(ara, ara + n);
    if(sum % 2 == 0){
        cout << sum << '\n';
    }
    else{
        int i = 0;
        while(i < n){
            if(ara[i] % 2 == 1){
                sum -= ara[i];
            }
            if(sum % 2 == 0){
                cout << sum << '\n';
                break;
            }
            i++;
        }
    }
    return 0;
}
