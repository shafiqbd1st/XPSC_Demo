#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    int freq[12][12] = {0};
    ll sum = 0;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        for(int j = 0; j < 2; j++){
            for(char k = 'a'; k <= 'k'; k++){
                if(k == str[j]) continue;

                string s = str;
                s[j] = k;
                sum += freq[s[0] - 'a'][s[1]-'a'];
            }
        }
        freq[str[0]-'a'][str[1]-'a']++;

    }
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
