#include <bits/stdc++.h>
using namespace std;;
typedef long long ll;
#define sz(yo) (ll)yo.size()

bool isPalindrome(string s)
{
    string t = s;
    reverse(t.begin(), t.end());
    return t == s;
}

void solve()
{
    string s, a, b;
    cin >> s;
    int x;
    cin >> x;
    a.push_back(s[0]);
    a.push_back(s[1]);
    b.push_back(s[3]);
    b.push_back(s[4]);
    int hours = stoi(a), minutes = stoi(b), currHours = stoi(a), currMinutes = stoi(b), addHours = x / 60, addMinutes = x % 60, ans = 0;

    currHours += addHours;
    currMinutes += addMinutes;
    currHours %= 24;
    currHours += (currMinutes / 60);
    currHours %= 24;
    currMinutes %= 60;

    while (true)
    {
        string x = (currHours <= 9 ? "0" : "") + to_string(currHours), y = (currMinutes <= 9 ? "0" : "") + to_string(currMinutes);

        string T = x + y;
        bool ok = isPalindrome(T);
     
        if (ok){
        	
            ans++;
        }
        

        currHours += addHours;
        currMinutes += addMinutes;
        currHours %= 24;
        currHours += (currMinutes / 60);
        currHours %= 24;
        currMinutes %= 60;

        if (a == x && b == y)
            break;
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    t = 1;
    cin >> t;
    for (ll cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        solve();
    }
    return 0;
}
