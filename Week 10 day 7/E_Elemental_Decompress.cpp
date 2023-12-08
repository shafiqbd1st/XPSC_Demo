#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
	int n; cin >> n;
	int item;
	vector<pii> all;
	for(int i = 0; i < n; i++){
		cin >> item;
		all.push_back({item, i});
	}
	
	sort(all.begin(), all.end());
	set<int> st;
	set<int> st1;
	for(int i = 1; i <= n; i++){
		st.insert(i);
		st1.insert(i);
	}
	vector<int> p(n);
	vector<int> q(n);
	for(auto x: all){
		int val = x.first;
		int idx = x.second;
		if(st.find(val) != st.end()){
			p[idx] = val;
			q[idx] = *st1.begin();
			if(q[idx] > p[idx]){
				cout << "NO" << '\n';
				return;
			}
			st.erase(p[idx]);
			st1.erase(q[idx]);
		}
		else if(st1.find(val) != st1.end()){
			q[idx] = val;
			p[idx] = *st.begin();
			if(p[idx] > q[idx]){
				cout << "NO" << '\n';
				return;
			}
			st.erase(p[idx]);
			st1.erase(q[idx]);
		}
		else{
			cout << "NO" << '\n';
			return;
		}
	}
	cout << "YES" << '\n';
	for(auto x: p)
		cout << x << ' ';
	cout << '\n';
	for(auto x: q)
		cout << x << ' ';
	cout << '\n';
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
