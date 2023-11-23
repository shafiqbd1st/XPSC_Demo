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
    tree[node] = tree[left] + tree[right];

}
int query(int node, int l, int r, int x, int y)
{
    if(r < x || l > y){
        return 0;
    }
    if(l >= x && r <= y){
        return tree[node];
    }
    int left = node * 2;
    int right = left + 1;
    int mid = (l + r) / 2;
    return query(left, l, mid, x, y) + query(right, mid + 1, r, x, y);
}
void update(int node, int l, int r, int idx, int val)
{
    if(idx < l || idx > r) return;
    if(l == r && l == idx){
        tree[node] += val;
        return;
    }
    int left = node * 2;
    int right = left + 1;
    int mid = (l + r) / 2;
    update(left, l, mid, idx, val);
    update(right, mid + 1, r, idx, val);
    tree[node] = tree[left] + tree[right];
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
        int ops;
        cin >> ops;
        if(ops == 1){
            int idx;
            cin >> idx;
            int ans = query(1, 0, n - 1, idx, idx);
            cout << ans << '\n';
            update(1, 0, n - 1, idx, -ans);
        }
        if(ops == 2){
            int idx, val;
            cin >> idx >> val;
            update(1, 0, n - 1, idx, val);
        }
        if(ops == 3){
            int l, r;
            cin >> l >> r;
            int ans = query(1, 0, n - 1, l, r);
            cout << ans << '\n';
        };
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
