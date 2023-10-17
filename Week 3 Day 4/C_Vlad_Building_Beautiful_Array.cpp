#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    vector<int> odd;
    vector<int> even;
    int item;
    for(int i = 0; i < n; i++){
        cin >> item;
        if(item % 2 == 0) even.push_back(item);
        else odd.push_back(item);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    if(even.size() == n || odd.size() == n){
        cout << "YES" << '\n';
    }
    else if(even[0] < odd[0]) cout << "NO" << '\n';
    else cout << "YES" << '\n';

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
