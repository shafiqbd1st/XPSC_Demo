#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    if(n == 0) cout << 25 << '\n';
    else if(n == 50) cout<< 0 << '\n';
    else {
        int cnt = 0;
        while(n != 50){
            if(n < 50){
                n += 2;
                cnt++;
            }
            else{
                n -= 3;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }

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
