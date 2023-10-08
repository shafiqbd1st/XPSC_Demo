#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

bool isPrime(int n)
{
	if(n < 2) return false;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0) return false;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	int ans = 0;
	for(int j = 1; j <= n; j++){
		int cnt = 0;
		for(int i = 1; i * i <= j; i++){
			if(j % i == 0){
				if(isPrime(i)) cnt++;
				if(i != j / i)
					if(isPrime(j/i)) cnt++;
			}
		}
		if(cnt == 2) ans++;
	}
	cout << ans << '\n';
	
	return 0;
}
