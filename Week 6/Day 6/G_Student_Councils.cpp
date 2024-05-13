#include<bits/stdc++.h>
using namespace std;

bool check(long long mid, vector<long long>& a, long long n, long long k) {
    long long count = 0;
    for(int i = 0; i < n; i++) {
        count += min(mid, a[i]);
    }
    return count >= mid * k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long k, n;
    cin >> k >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    long long l = 0, r = 1e14, ans = 0;
    while(l <= r) {
        long long mid = l + (r - l) / 2;
        if(check(mid, a, n, k)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}
