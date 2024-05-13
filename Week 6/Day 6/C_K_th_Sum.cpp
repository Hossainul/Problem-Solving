#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() 
{
    faster;
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    f { cin >> a[i]; } 
    f { cin >> b[i]; }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    auto ok = [&](int mid)
    {
        ll count = 0;
        for (int i = 0; i < n; ++i) {

            count += upper_bound(b.begin(), b.end(), mid - a[i]) - b.begin();
        }
        return count >= k;
    };

    int l = 1, r = 1e10+5, ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    p ans << endl;

    return 0;
}
