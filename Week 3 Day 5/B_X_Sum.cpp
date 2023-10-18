#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n, m;
    cin >> n >> m;
    int ara[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ara[i][j];
        }
    }
    int mx = INT_MIN;
   for(int i = 0; i < n; i++){
        int sum = 0;
       for(int j = 0; j < m; j++){
            sum = 0;
            int x = i, y = j;
            int x1 = i, y1 = j;
            sum += ara[i][j];
            x--, y--;

            while(x >= 0 && y >= 0){
                sum += ara[x][y];
                x--, y--;
            }
            x1++, y1++;
            while(x1 < n && y1 < m){
                sum += ara[x1][y1];
                x1++, y1++;
            }
            int z = i, z1 = j;
            z--, z1++;
            while(z >= 0 && z1 < m){
                sum += ara[z][z1];
                z--, z1++;
            }
            z = i, z1 = j;
            z++, z1--;
            while(z < n && z1 >= 0){
                sum += ara[z][z1];
                z++, z1--;
            }
            mx = max(mx, sum);
         
       }
         mx = max(mx, sum);
   }
    cout << mx << '\n';

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
