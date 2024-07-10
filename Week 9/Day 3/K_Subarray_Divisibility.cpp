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
    int n; cin >> n;
    vector<int>a(n);
    f{cin >> a[i];}

    map<ll,ll>mp;
    ll ans = 0,sum = 0;
    mp[0] = 1;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        ll re = ((sum % n) + n) % n;
        if(mp.count(re))
        {
            ans += mp[re];
        }

        mp[re]++;
    }

    p ans << endl;
    return 0;
}

