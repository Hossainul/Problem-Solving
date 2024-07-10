// Bismillah.
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for (int i = 0; i < n; i++)
#define testcase \
    int t;       \
    cin >> t;    \
    while (t--)
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    faster;
    ll n;
    cin >> n;
    ll a[n];

    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    map<ll, ll> mp;
    ll ans = 0;
    
    for (ll i = 0, j = 0; i < n; ++i)
    {
        j = max(mp[a[i]], j);
        ans = max(ans, i - j + 1);
        cout << i << "->" << j << endl;
        mp[a[i]] = i + 1;
    }
    cout << ans << "\n";

    return 0;
}
