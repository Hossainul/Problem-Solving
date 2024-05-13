#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(ll mid, vector<ll>& a, ll n, ll k) {
    ll segments = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > mid) return false;
        if(sum + a[i] > mid) {
            sum = a[i];
            segments++;
        } else {
            sum += a[i];
        }
    }
    if(sum > 0) segments++;
    return segments <= k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll l = 1, r = 1e18, ans = 0;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if(check(mid, a, n, k)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
