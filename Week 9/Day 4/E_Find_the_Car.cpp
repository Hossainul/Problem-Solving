// Bismillah.
#include <iostream>
#include <vector>
#include <algorithm>

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
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(k + 1), b(k + 1);
        a[0] = 0;
        b[0] = 0;

        for (int i = 1; i <= k; i++) cin >> a[i];
        for (int i = 1; i <= k; i++) cin >> b[i];

        while (q--)
        {
            int d; cin >> d;
            if (d == 0) {
                cout << 0 << " ";
                continue;
            }
            if (d == n) {
                cout << b[k] << " ";
                continue;
            }

            ll ind = upper_bound(a.begin(), a.end(), d) - a.begin();
            ll ans = b[ind - 1];

            ll extra_area = d - a[ind - 1];

            ll Dist = a[ind] - a[ind - 1];
            ll Time = b[ind] - b[ind - 1];

            ll extra_time = (extra_area * Time) / Dist;

            ans += extra_time;
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
