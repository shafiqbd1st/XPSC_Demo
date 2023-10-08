#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    int item;
    for(int i = 0; i < n; i++){
        cin  >> item;
        if(item != x) v.push_back(item);
    }
    if(!v.size()) cout << '\n';
    else{
        for(auto x: v){
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}
