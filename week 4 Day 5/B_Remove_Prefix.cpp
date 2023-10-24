#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++){
        cin >> ara[i];
    }
    int freq[200000] = {0};
    int i, j, cnt;
    j = n - 1;

    while(j >= 0){
        if(freq[ara[j]] == 1){
            break;
        }
        freq[ara[j]] = 1;
        j--;
    }
    cout <<j + 1 << '\n';
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
