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
        ll n,x; cin >> n >> x;
        vector<ll>a(n); f{cin >> a[i];}
        sort(a.begin(),a.end());

        auto ok = [&](ll mid)
        {
            ll total = 0;
            for(int i = 0; i < n; i++)
            {
                if(a[i] <= mid) total += mid - a[i];
            }

            return total <= x;
        };

        ll l = 1, r = 1e10 + 5,mid, ans = 0;
        while(l <= r)
        {
            mid = (l+r) / 2;
            if(ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }

        p ans << endl;
    }
    return 0;
}

