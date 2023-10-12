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

	for(int i = 0; i < n; i++){
		cin >> ara[i];
	}
    int mx, idx;
    mx = 0;
	for(int i = 2; i <= 1000; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(ara[j] % i == 0) cnt++;
        }
        if(cnt >= mx){
            mx = cnt;
            idx = i;
        }
    }
    cout << idx << '\n';
    
	return 0;
}