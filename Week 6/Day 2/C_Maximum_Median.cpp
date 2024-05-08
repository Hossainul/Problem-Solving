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
    ll n,k; cin >> n >> k;
    vector<int>a(n);
    f{cin >> a[i];}
    
    sort(a.begin(), a.end());
    auto ok = [&](ll mid)
    {
        ll cnt = 0;
       // p mid << endl;
        for(int i = n / 2; i < n; i++)
        {
            cnt += (a[i] < mid ? (mid - a[i]) : 0);
        }
        return cnt <= k;
    };

    ll l = 1,r = 2e9, ans = 0, mid;
    while(l <= r)
    {
        mid = (l + r) / 2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;

    }

    p ans << endl;
    return 0;
}

