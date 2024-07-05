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
        vector<ll>a(n),pref(n);
        ll sum = 0;
        
        for(int i = 0; i < n; i++)
        {   
            cin >> a[i]; sum+= a[i];
            if(i == 0) pref[i] = a[i];
            else pref[i] = pref[i-1] + a[i];
        }
        

        ll ans = 1;
        for(int i = 0; i < n-1; i++)
        {
            ans = max((__gcd(pref[i],sum - pref[i])),ans);
           
        }

        p ans << endl;
    }
    return 0;
}

