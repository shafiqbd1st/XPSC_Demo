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
	char str[n+1];
	char ans[n+1];
	for(int i =  0; i < n; i++){
		cin >> ara[i];
	}
	for(int i =  0; i < n; i++){
		cin >> str[i];
	}
	str[n] = '\0';
	int k = 0;
	for(int i = 0; i < n; i++){
		if(ara[i] != -1){
			char ch = str[i];
			int num = ara[i];
			for(int j = 0; j < n; j++){
				if(num == ara[j]){
					ans[j] = ch;
					// printf("%d %c\n", ara[j], ans[j]);
					ara[j] = -1;
				}
			}
		}
	}
	ans[n] = '\0';
	// cout << ans << '\n';
	if(strcmp(str,ans) == 0){
		cout << "YES" << '\n';
	}
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