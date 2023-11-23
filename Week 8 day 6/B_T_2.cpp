#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())
#define sortg(v) sort(v.begin(), v.end(), greater<int>())

const int N = 1e5 + 9;
const int mod = 1e9 + 7;
int ara[100009], tree[400009];

void build(int node, int l, int r)
{
    if(l == r){
        tree[node] = ara[l];
        return;
    }

    int left = node * 2;
    int right = left + 1;
    int mid = (l + r) / 2;
    build(left, l, mid);
    build(right, mid + 1, r);
    tree[node] = min(tree[left] , tree[right]);

}
int query(int node, int l, int r, int x, int y)
{
    if(r < x || l > y){
        return INT_MAX;
    }
    if(l >= x && r <= y){
        return tree[node];
    }
    int left = node * 2;
    int right = left + 1;
    int mid = (l + r) / 2;
    return min(query(left, l, mid, x, y) , query(right, mid + 1, r, x, y));
}

void solution()
{
    int n, q;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> ara[i];
    }
    build(1, 0, n - 1);
    
    while(q--){
        int l, r;
        cin >> l >> r;
        l--, r--;
        int ans = query(1, 0, n - 1, l, r);
        cout << ans << '\n';
        
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
        cout << "Case " << i << ":\n";
        solution();
    }
    
    return 0;
}
