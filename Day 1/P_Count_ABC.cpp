#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int n;
    string str;
    cin >> n;
    cin >> str;
    int cnt = 0;
    for(int i = 0; i < n - 2; i++){
        if(str[i] == 'A' && str[i+1] == 'B' && str[i+2] == 'C'){
            cnt++;
        }
    }
   cout << cnt << '\n';

    return 0;
}
