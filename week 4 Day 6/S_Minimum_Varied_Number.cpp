#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
	int n;
	cin >> n;

	string str = "";

	if(n <= 9) cout << n << '\n';
    else{
        for(int i = 9; i >= 1; i--){
            if((n - i) >= 0){
                str += i +'0';
                n -= i;
            }
        }
        reverse(str.begin(), str.end());
        cout << str << '\n';
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
