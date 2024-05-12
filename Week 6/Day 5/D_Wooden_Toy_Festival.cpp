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
        ll n; cin >> n;
        vector<ll>a(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        auto ok = [&](ll mid)
        {
            int cnt = 1;
            for(ll l = 0,r = l + 1; r < n;)
            {
                if(a[l] + mid + mid >= a[r])
                {
                    r++;
                }
                else 
                {
                    cnt ++;
                    l = r;
                    r = l;
                }

                
            }

            return cnt < 4;
        };

        ll l = 0,r = 1e9,ans = 0;
        while(l <= r)
        {
            ll mid = l + (r-l) / 2LL;
            if(ok(mid))
            {
                ans = mid;
                r = mid - 1LL;
            }else l = mid + 1LL;
        }

        p ans << endl;
    }
    return 0;
}

