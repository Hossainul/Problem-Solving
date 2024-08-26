// Bismillah.
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main() {
    faster;
    int n; cin >> n;
    vector<int>a(n);
    
    pbds<int>sm,gt;
    f{cin >> a[i]; sm.insert(a[i]);}

    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        sm.erase(a[i]);

        int x = sm.order_of_key(a[i]);
        int y = gt.size() - gt.order_of_key(a[i]);

        gt.insert(a[i]);
        ans += (ll) x * (ll) y;
    }

    cout << ans << endl;
    return 0;
}

