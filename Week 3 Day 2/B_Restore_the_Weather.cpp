#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;cin>>n>>k;
    vector<pair<int,int>> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;a[i].second=i;
    }
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    vector<int> ans(n);
    for(int i=0;i<n;i++)ans[a[i].second]=b[i];
    for(auto it:ans)cout<<it<<" ";;cout<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;cin>>T;while(T--)solve();
    return 0;
}