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
    ll n,x,y; cin >> n >> x >> y;
    ll l = 0, r = max(x,y)*n, ans = 0, mid;

    auto ok = [&](ll mid)
    {
        if(mid < min(x,y)) return false;

        int cnt = 1;
        mid -= min(x,y);
        cnt += mid / x + mid / y;
        return cnt >= n;
    };

    while(l <= r)
    {
        mid = (l+r) / 2;
        if(ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    p ans << endl;
    return 0;
}

