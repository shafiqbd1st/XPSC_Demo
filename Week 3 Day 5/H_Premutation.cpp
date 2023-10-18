#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    int ara[n][n-1];
    int sum = (n * (n + 1)) / 2;
    int freq[n+1] = {0};
    int mx = 0, num;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            cin >> ara[i][j];
        }
        freq[ara[i][0]]++;
        if(mx < freq[ara[i][0]]){
            mx = freq[ara[i][0]];
            num = ara[i][0];
        }

    }
    int i = 0;
    while(i < n){
        if(ara[i][0] != num){
            cout << num << ' ';
            for(int j = 0; j < n - 1; j++){
                cout << ara[i][j] << ' ';
            }
            break;
        }
        i++;
    }
    cout << '\n';
}

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    // cin.ignore();
    for(int i = 1; i <= t; i++){
        // cout << "Case " << i << ": ";
        solution();
    }
    
    return 0;
}
