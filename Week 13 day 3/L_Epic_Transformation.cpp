#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
#define pii pair<int, int>

const int N = 3e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n; cin >> n;
    map<int, int> mp;
    for(int i =  1; i <= n; i++){
        int item; cin >> item;
        mp[item]++;
    }
    priority_queue<int> pq;
    for(auto x: mp){
        pq.push(x.second);
    }
    int prev, next, ans =  0;
    while(pq.size() >= 2){
        prev = pq.top();
        pq.pop();
        next = pq.top();
        pq.pop();
        prev--, next--;
        if(prev != 0){
            pq.push(prev);
        }
        if(next != 0){
            pq.push(next);
        }
    }
    while(!pq.empty()){
        ans += pq.top();
        pq.pop();
    }
    cout << ans << '\n';

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
