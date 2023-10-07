#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    int y;
    cin >> y;
    while(true){
        y++;
        int n = y;
        int a = n % 10;
        n /= 10;
        int b = n % 10;
        n /= 10;
        int c = n % 10;
        n /= 10;
        int d = n % 10;
        n /= 10;
        if(a != b && a != c && a != d && b != c && c != d && b != d){
            cout << y << '\n';
            break;
        }
    }
    return 0;
}
