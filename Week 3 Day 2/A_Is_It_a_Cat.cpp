#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    string str1 = "";
    string ans = "meow";
    int len = str.size();
    for(int i = 0; i < len; i++){
    	str[i] = tolower(str[i]);
    }
    for(int i = 0; i < len; ){
    	str1 += str[i];
    	i++;
    	while(str[i-1] == str[i] && i < len){
    		i++;
    	}
    }
    if(ans == str1) cout << "YES" << '\n';
    else cout << "NO" << '\n';

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
