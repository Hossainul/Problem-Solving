// Bismillah.
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for(int i = 0; i < n; i++)
#define testcase int t; cin >> t; while(t--)
#define faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    faster;
    int n, k; cin >> n >> k;
    vector<int> a(n);
    f { cin >> a[i]; }
    pbds<int> pb;
    for (int i = 0; i < k; i++) {
        pb.insert(a[i]);
    }

    ll old_m = *pb.find_by_order((k + 1) / 2 - 1);
    ll diff = 0;
    for (int i = 0; i < k; i++) diff += abs(a[i] - old_m);
    p diff;

    for (int i = 0; i < n - k; i++) {
        pb.erase(pb.find_by_order(pb.order_of_key(a[i])));
        pb.insert(a[i + k]);
        ll nm = *pb.find_by_order((k + 1) / 2 - 1);
        diff = diff + abs(nm - a[i + k]) - abs(old_m - a[i]);
        if (k % 2 == 0) diff -= (nm - old_m);
        old_m = nm;
        cout << " " << diff;
    }
    return 0;
}
