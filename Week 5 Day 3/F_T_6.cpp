#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x: v) cin >> x;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int num = v[i];
        for(int j = 2; j * j <= num; j++){
            while(num % j == 0){
                mp[j]++;
                num /= j;
            }
        }
        if(num > 1){
        	mp[num]++;
        }
    }
 
    bool ck = true;
    int cnt = 0;
    for(auto x: mp){
    	if(x.second % n != 0){
    		ck = false;
    		break;
    	}
    }
    if(ck) cout << "YES" << '\n';
    else cout << "NO" << '\n';

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
