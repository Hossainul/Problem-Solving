// Bismillah
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define print cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define Faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

bool isLower(ll x)
{   
    bool flag = 0;
    for(ll i = 2; i * i <= x; i++)
    {
        if(x % i == 0)
        {
           return false;
        }
    }

    return true;
}
int main() {
    Faster;
    ll n; cin >> n;
    
    if(isLower(n)) print 1 << endl;
    else
    {
        if(n % 2 == 0) print 2 << endl;
        else 
        {
            if(isLower(n-2)) print 2;
            else print 3 << endl;
        }
    }
    return 0;
}