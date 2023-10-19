#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int freqU[26] = {0}, freqL[26] = {0};
    for(int i = 0; i < n; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            freqU[str[i]-'A']++;
        }
        else{
             freqL[str[i]-'a']++;
        }
    }
    
    int sum = 0;
    int extra = 0;
    for(int i = 0; i < 26; i++){
       sum += min(freqL[i], freqU[i]);
       int x = abs(freqL[i] - freqU[i]);
       extra += (x / 2);
    }
    sum += min(extra, k);
    cout << sum << '\n';
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
