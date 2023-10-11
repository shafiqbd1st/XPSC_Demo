#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
	string str;
	vector<string> v;
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> str;
		v.push_back(str);
	}
	sort(v.begin(), v.end());
	int mn = INT_MAX;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			int sum = 0;
			for(int k = 0; k < m; k++){
				int x = abs(v[i][k] - v[j][k]);
				sum += x;
			}
			mn = min(mn, sum);
		}
	}

	cout << mn << '\n';

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