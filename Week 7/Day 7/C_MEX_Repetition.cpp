#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        deque<ll> a(n);
        ll array_Sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            array_Sum += a[i];
        }

        ll sum_Total = (n * (n + 1)) / 2;

        k = k % (n + 1);

        if (k == 0) {
            for (int val : a) {
                cout << val << " ";
            }
            cout << endl;
            continue;
        }

        while (k--) {
            for (int i = 0; i < n; i++) {
                ll diff = sum_Total - array_Sum;
                array_Sum -= a[i];
                array_Sum += diff;
                a[i] = diff;
            }
        }

        for (ll val : a) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
