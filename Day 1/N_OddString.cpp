#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(i % 2 == 0)
            cout << str[i];
    }
    return 0;
}
