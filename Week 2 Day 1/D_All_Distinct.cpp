#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    set<int> st;
    int item, n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> item;
        st.insert(item);
    }
    int len = st.size();
    if(n % 2 == 0){
        if(len % 2 == 0){
            cout << len << '\n';
        }
        else cout << len - 1 << '\n';
    }
    else{
        if(len % 2 == 0){
            cout << len - 1 << '\n';
        }
        else cout << len << '\n';
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
