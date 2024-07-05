// Bismillah.
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main() {
    faster;
    testcase
    {
        int n; cin >> n;
        vector<ll>a(n);
        f{cin >> a[i];}

        ll x = 0, y = 0;
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0) x = __gcd(a[i],x);
            else y = __gcd(a[i],y);
        }
        

        ll flag = 1, cnt = 1;
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0 && a[i] % y == 0) flag = 0;
            if( i % 2 != 0 && a[i] % x == 0) cnt = 0;
        }

        if(flag == 1) p y << endl;
        else if(cnt == 1) p x << endl;
        else p 0 << endl;
    }
    return 0;
}

