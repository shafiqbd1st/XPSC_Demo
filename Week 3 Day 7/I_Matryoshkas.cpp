#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
	multiset<int> st;
	set<int> st1;
	int n;
	cin >> n;
	int item;
	for(int i = 0; i < n; i++){
		cin >> item;
		st.insert(item);
		st1.insert(item);
	}
	if(st1.size() == 1){
		cout << n << '\n';
		return; 
	}
	int cnt = 0;
	while(true){
		auto x = st.begin();
		int val = *x;
		auto y = x;
		x++;
		st.erase(y);
		cnt++;
		if(st.empty()) break;
		for( ; x!= st.end(); ){
			if(val + 1 == *x){
				val = *x;
				y = x;
				x++;
				st.erase(y);
			}
			else{
				x++;
			}
		}
		if(st.empty()) break;
	}
	
	cout << cnt << '\n';
	

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
