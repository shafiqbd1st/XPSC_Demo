#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    ll n;
    cin >> n;
    priority_queue<ll> pq;
    ll ara[n];
    for(int i = 0; i < n; i++){
        cin >> ara[i];
    }
    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(ara[i] > 0){
            pq.push(ara[i]);
        }
        else{
            if(!pq.empty()){
                sum += pq.top();
                pq.pop();
            }
        }
    }
    cout << sum << '\n';
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
