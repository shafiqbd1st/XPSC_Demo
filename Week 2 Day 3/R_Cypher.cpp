#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++){
        cin >> ara[i];
    }
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        char ch;
        for(int j = 0; j < x; j++){
            cin >> ch;
            if(ch == 'D'){
                ara[i]++;
            }
            if(ch == 'U'){
                ara[i]--;
            }
            if(ara[i] == 10){
                ara[i] = 0;
            }
            else if(ara[i] == -1){
                ara[i] = 9;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << ara[i] << ' ';
    }
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