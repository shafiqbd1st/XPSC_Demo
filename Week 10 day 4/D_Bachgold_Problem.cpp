// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define sort(v) sort(v.begin(), v.end())
// #define sortg(v) sort(v.begin(), v.end(), greater<int>())
// const int N = 1e5 + 9;
// const int mod = 1e9 + 7;
// bool isPrime(int n)
// {
//     if(n == 2) return 1;
//     if(n % 2 == 0) return 0;
//     for(int i = 3; i * i <= n; i += 2){
//         if(n % i == 0) return 0;
//     }
//     return 1;
// }
// int main()
// {
//     ios_base:: sync_with_stdio(0);
//     cin.tie(0);
    
//     int n;
//     cin >> n;

//     vector<int> nums;
//     for(int i = 2; i * i <= n; i++){
//         if(isPrime(i)){
//             while((n - i) > 1){
//                 nums.push_back(i);
//                 n -= i;
//             }
//         }
//     }
//     if(n > 1){
//         nums.push_back(n);
//     }
//     cout << nums.size() << '\n';
//     for(auto x: nums){
//         cout << x << ' ';
//     }
//     cout << '\n';

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(v) sort(v.begin(), v.end())
#define sortg(v) sort(v.begin(), v.end(), greater<int>())
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    int ans = n / 2;
    cout << ans << '\n';
    if(n & 1){
        for(int i = 1; i < ans; i++){
            cout << 2 << ' ';
        }
        cout << 3 << '\n';
    }
    else{
        for(int i = 1; i <= ans; i++){
            cout << 2 << ' ';
        }
        cout << '\n';
    }

    return 0;
}
