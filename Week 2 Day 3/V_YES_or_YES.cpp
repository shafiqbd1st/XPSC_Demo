#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solution()
{
    string str;

    cin >> str;
    string str1 = "";
    for(int i = 0; i < 3; i++){
        str1 += tolower(str[i]);
    }
    if(str1 == "yes")
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    
}
int main()
{
    // ios_base:: sync_with_stdio(false);
    // cin.tie(NULL);
    int t = 1;

    cin >> t;
    while(t--){
        solution();
    }

    return 0;
}