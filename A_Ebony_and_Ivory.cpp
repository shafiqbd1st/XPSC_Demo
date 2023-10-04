#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

bool fun(int a, int b, int c)
{
    for(int i = 0; i <= 10000; i++){
        
        for(int j = 1; j <= 10000; j++){
            if((i*a)+(j*b)==c) return true;
        }
    }
    return false;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ck = 0;
    if(a == 1 || b == 1){
        cout << "Yes"<< '\n';
        ck = 1;
    }
    
    if(fun(a,b,c)&&ck==0){
        cout << "Yes"<< '\n';
        ck = 1;
    }
    if(fun(b,a,c)&&ck==0){
        cout << "Yes"<< '\n';
        ck = 1;
    }
    else if(ck==0){
        cout << "No"<< '\n';
    }

    return 0;
}
