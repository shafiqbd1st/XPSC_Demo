#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solution()
{
    string str, str1;
    cin >> str >> str1;
    int x1, x2;
    x1 = x2 = 0;
    int len = str.size();
    int len1 = str1.size();
    char ch = str[len-1];
    char ch1 = str1[len1 - 1];
  
    int x = len - 1;
    int y = len1 - 1;
    if(str == str1) cout << '=';
    else if(ch == ch1 && ch == 'S'){
    	
    	if(x < y) cout << '>';
    	else cout << '<';
    }
    else if(ch == ch1 && ch == 'L'){
    	if(x > y) cout << '>';
    	else cout << '<';
    }
    else if(ch == ch1 && ch1 == 'M'){
    	if(x > y) cout << '>';
    	else cout << '<';
    }
 
    else if(ch == 'L' && ch1 == 'M') cout << '>';
    else if(ch == 'M' && ch1 == 'L') cout << '<';
    else if(ch == 'L' && ch1 == 'S') cout << '>';
    else if(ch == 'S' && ch1 == 'L') cout << '<';

    else if(ch == 'M' && ch1 == 'S') cout << '>';
    else if(ch == 'S' && ch1 == 'M') cout << '<';
    

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
