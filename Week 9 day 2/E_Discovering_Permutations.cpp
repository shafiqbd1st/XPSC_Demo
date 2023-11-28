#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n, k;
    cin >> n >> k;
    string s;
    for(int i = 0; i < n; i++){
    	s += str[i];
    }
    int cnt = 0;
    do{
    	cnt++;
    	cout << s << '\n';
    	if(cnt >= k) break;
    }while(next_permutation(s.begin(), s.end()));

}

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    // cin.ignore();
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": \n";
        solution();
    }
    
    return 0;
}
